# vagrant-ubuntu-cloudabi: a Vagrant box for building C/C++ binaries for CloudABI

# VAGRANT CLOUD

* https://app.vagrantup.com/mcandre/boxes/vagrant-ubuntu-cloudabi

# EXAMPLE

```console
$ cd test
$ vagrant up
$ vagrant ssh -c "cd /vagrant && mkdir -p bin && x86_64-unknown-cloudabi-cc -o bin/hello hello.c && cloudabi-run -e bin/hello <cloudabi-stdout.yml"
Hello World!
```

# RUNTIME REQUIREMENTS

* [Vagrant](https://www.vagrantup.com)
* The [VirtualBox](https://www.virtualbox.org) hypervisor provider

## Recommended

* [vagrant-rsync-back](https://github.com/smerrill/vagrant-rsync-back) assists in copying artifacts from the guest to the host

# BUILDTIME REQUIREMENTS

* [Vagrant](https://www.vagrantup.com)
* The [VirtualBox](https://www.virtualbox.org) hypervisor provider
* [make](https://www.gnu.org/software/make/)

# EXPORT

```console
$ make vagrant-ubuntu-cloudabi.box
```
