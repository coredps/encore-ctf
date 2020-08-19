FROM ubuntu:18.04
MAINTAINER Anonimbus

RUN apt-get update && apt-get install -y socat

RUN useradd -ms /bin/sh boye
WORKDIR /home/boye

COPY ./boye ./
COPY ./flag.txt ./

RUN chown -R root:boye /home/boye && \
     chmod 750 /home/boye && \
     chmod 550 /home/boye/boye && \
     chown root:boye /home/boye/flag.txt && \
     chmod 440 /home/boye/flag.txt

EXPOSE 8000

CMD ["socat", "-T60", "TCP-LISTEN:8000,reuseaddr,fork,su=boye","EXEC:/home/boye/boye,pty,ctty,echo=0"]