#include <stdio.h>
#include <cstdlib>
#include <string.h>
#include "cscanarg.h"

ASState* ASStateInit(int argc, char* argv[], int argi) {

    ASState* ass = (ASState*)malloc(sizeof(ASState));

    ass->argc = argc;
    ass->argv = argv;
    ass->argi = argi;

    return ass;
}

void scanarg(ASState* ass, ASType type, void *var) {

    int argc = ass->argc;
    char** argv = ass->argv;
    int* argi = &(ass->argi);

    if (*argi >= argc) {
        printf("Not enough arguments for \"scanarg\"!\n");
        return;
    }

    switch (type) {
    case ST_INT: {
            int *ivar = (int*)var;
            *ivar = atoi(argv[*argi]);
            break;
        }
    case ST_FLOAT: {
            float *fvar = (float*)var;
            *fvar = atof(argv[*argi]);
            break;
        }
    case ST_DOUBLE: {
            double *dvar = (double*)var;
            *dvar = strtod(argv[*argi], NULL);
            break;
        }
    case ST_CSTR: {
            char *svar = (char*)var;
            strcpy(svar, argv[*argi]);
            break;
        }
    }

    (*argi)++;
}
