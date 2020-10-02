FROM ubuntu:18.04
MAINTAINER Anonimbus

RUN apt-get update && apt-get install -y socat

RUN useradd -ms /bin/sh twenty
WORKDIR /home/twenty

COPY ./twenty ./
COPY ./flag.txt ./

RUN chown -R root:twenty /home/twenty && \
     chmod 750 /home/twenty && \
     chmod 550 /home/twenty/twenty && \
     chown root:twenty /home/twenty/flag.txt && \
     chmod 440 /home/twenty/flag.txt

EXPOSE 8000

CMD ["socat", "-T60", "TCP-LISTEN:8000,reuseaddr,fork,su=twenty","EXEC:/home/twenty/twenty"]
