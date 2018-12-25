#include <argdata.h>
#include <program.h>
#include <stdio.h>
#include <stdlib.h>

void program_main(const argdata_t *ad) {
    int out;
    argdata_get_fd(ad, &out);
    dprintf(out, "Hello World!\n");
    exit(EXIT_SUCCESS);
}
