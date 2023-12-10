FROM ubuntu:18.04

RUN apt-get update && apt-get install -y socat
WORKDIR /home/babybof
COPY ./ret2win ./
RUN echo enc0re{cAnArY_1snT_bAb5_pW7_a4T3R_a1L} > /home/babybof/flag.txt

EXPOSE 8000

CMD ["socat", "-T60", "TCP-LISTEN:8000,reuseaddr,fork,su=pwn", "EXEC:./pwn"]
