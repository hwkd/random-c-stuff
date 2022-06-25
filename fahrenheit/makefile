all: build exec clean

build:
	cc main.c -o main.o

exec: build
	./main.o

clean:
	rm main.o