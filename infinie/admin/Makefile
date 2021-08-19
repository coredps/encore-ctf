binary:
	gcc infinie.c -static -m32 -O0 -no-pie -fno-stack-protector -o infinie

build:
	docker build -t infinie .

run:
	docker run -it -d --restart=always -p 4567:8000 infinie
