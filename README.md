
## Building example.c:
```shell
g++ -c example.c -o bin/main.o
g++ -c src/cscanarg.c -o bin/cscanarg.o
g++ bin/main.o bin/cscanarg.o -o bin/example.exe
```

## Running example.exe:
```shell
./bin/example.exe 1 2 7.77 0.42256 "hello mom"
```
