CC=gcc
CFLAGS=-fPIC -nostdlib -no-pie -s

small_boi: 
	$(CC) $(CFLAGS) small_boi.c -o small_boi

build:
	docker build -t boye .

run:
	docker run -it -d -p 7890:8000 boye