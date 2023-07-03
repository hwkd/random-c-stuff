all: build exec clean

build:
	gcc -Wall -Werror -std=c11 *.c -o main.o

exec: build
	./main.o

clean:
	rm main.o
