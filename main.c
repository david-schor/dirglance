#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

static void traverse(void);

void usage(char *name)
{
    printf("\n\tUsage: %s [OPTION]... [DIR]...\n\n", name);
    printf("\n\
        Provides a convenient way to inspect the content of a directory\n\
        or drive at a glance.\n\n\
        -A, --include-all         include all files (i.e. hidden)\n\n");
    exit(EXIT_SUCCESS);
}

int main(int argc, char **argv)
{
    if (argc < 2)
        usage(*argv);
    
    setlocale(LC_ALL, "");
    
    traverse();
    return EXIT_SUCCESS;
}

static void traverse()
{
    
}