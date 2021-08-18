binary:
	gcc ret2win.c -o ret2win -no-pie -fno-stack-protector

build:
	docker build -t ret2win .

run:
	docker run -it -d -p 1234:8000 ret2win
