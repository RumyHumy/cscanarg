
## Building example.c:
```shell
g++ -c example.c -o bin/main.o
g++ -c src/argscan.c -o src/argscan.o
g++ bin/main.o src/argscan.o -o bin/build.exe
```

## Running example.c:
```shell
./bin/build.exe 1 2 7.77 0.42256 "hello mom"
```
