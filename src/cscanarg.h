#ifndef CSCANARG_H
#define CSCANARG_H

struct ASState {
    int argc;
    char** argv;
    int argi;
};

ASState* ASStateInit(int argc, char* argv[], int argi);

enum ASType {
    ST_INT,
    ST_FLOAT,
    ST_DOUBLE,
    ST_CSTR
};

void scanarg(ASState* ass, ASType type, void *var);

#endif // CSCANARG_H