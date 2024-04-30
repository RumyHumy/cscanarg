# Example

## example.c code
```c
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

    // Scanning arguments & Printing values
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
```

## Running example.exe:
```shell
./bin/example.exe 1 2 7.77 0.42256 "hello mom"
```

## Output
```txt
1 2                             
7.770000
0.422560                        
hello mom
```

## Building example.c:
```shell
g++ -c example.c -o bin/main.o
g++ -c src/cscanarg.c -o bin/cscanarg.o
g++ bin/main.o bin/cscanarg.o -o bin/example.exe
```
