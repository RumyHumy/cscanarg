#ifndef CSCANARG_H
#define CSCANARG_H

enum ASType {
    ST_INT,
    ST_FLOAT,
    ST_DOUBLE,
    ST_CSTR
};

void scanarg(int argc, char *argv[], int *argi, ASType type, void *var);

#endif // CSCANARG_H