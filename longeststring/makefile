all: build exec clean

build:
	gcc -Wall *.c -o main.o

exec: build
	./main.o

clean:
	rm main.o
