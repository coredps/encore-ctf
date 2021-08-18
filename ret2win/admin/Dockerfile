FROM ubuntu:18.04
MAINTAINER Anonimbus

RUN apt-get update && apt-get install -y socat

RUN useradd -ms /bin/sh ret2win
WORKDIR /home/ret2win

COPY ./ret2win ./
RUN echo enc0re{r37_too_w1N} > /home/ret2win/flag.txt

RUN chown -R root:ret2win /home/ret2win && \
     chmod 750 /home/ret2win && \
     chmod 550 /home/ret2win/ret2win && \
     chown root:ret2win /home/ret2win/flag.txt && \
     chmod 440 /home/ret2win/flag.txt

EXPOSE 8000

CMD ["socat", "-T60", "TCP-LISTEN:8000,reuseaddr,fork,su=ret2win","EXEC:/home/ret2win/ret2win"]
