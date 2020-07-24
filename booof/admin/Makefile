binary:
	gcc booof.c -o booof -no-pie -fno-stack-protector

build:
	docker build -t booof .

run:
	docker run -it -d -p 1234:8000 booof