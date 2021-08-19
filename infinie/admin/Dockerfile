FROM ubuntu:18.04
MAINTAINER Anonimbus

RUN apt-get update && apt-get install -y socat

RUN useradd -ms /bin/sh infinie
WORKDIR /home/infinie

COPY ./infinie ./
RUN echo enc0re{boUccl3_1nfin13} > /home/infinie/flag.txt

RUN chown -R root:infinie /home/infinie && \
     chmod 750 /home/infinie && \
     chmod 550 /home/infinie/infinie && \
     chown root:infinie /home/infinie/flag.txt && \
     chmod 440 /home/infinie/flag.txt

EXPOSE 8000

CMD ["socat", "-T60", "TCP-LISTEN:8000,reuseaddr,fork,su=infinie","EXEC:/home/infinie/infinie"]
