#include <stdio.h>
#include <cstdlib>
#include "src/cscanarg.h"

int main(int argc, char *argv[]) {
    // Setup
    ASState* ass = ASStateInit(argc, argv, 1);

    // Variables declaration
    int a, b;
    float f;
    double d;
    char *str;

    // Reading arguments & Printing values
    scanarg(ass, ST_INT, &a);
    scanarg(ass, ST_INT, &b);
    printf("%d %d\n", a, b);
    scanarg(ass, ST_FLOAT, &f);
    printf("%f\n", f);
    scanarg(ass, ST_DOUBLE, &d);
    printf("%lf\n", d);
    scanarg(ass, ST_CSTR, &str);
    printf("%s\n", &str);
    
    // Freeing memory
    free(ass);
    
    return 0;
}