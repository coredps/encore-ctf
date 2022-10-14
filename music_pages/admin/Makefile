build:
	bash script.sh
	docker build -t lfigit .

run:
	docker run -it -d --restart=always -p 1234:80 lfigit
