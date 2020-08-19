CC=gcc
CFLAGS=-fPIC -nostdlib -no-pie -s

small_boi: 
	$(CC) $(CFLAGS) boye.c -o boye

build:
	docker build -t boye .

run:
	docker run -it -d -p 7890:8000 boye