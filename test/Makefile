.PHONY: clean-vm clean-vagrant-metadata

all: test

test: test-boot test-compile

test-boot:
	vagrant up

test-compile: test-boot
	vagrant ssh -c "cd /vagrant && mkdir -p bin && x86_64-unknown-cloudabi-cc -o bin/hello hello.c && cloudabi-run -e bin/hello <cloudabi-stdout.yml"

clean-vm:
	-vagrant destroy -f

clean-vagrant-metadata:
	-rm -rf .vagrant

clean: clean-vm clean-vagrant-metadata
