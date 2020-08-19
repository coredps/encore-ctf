FROM ubuntu:18.04
MAINTAINER Anonimbus

RUN apt-get update && apt-get install -y socat

RUN useradd -ms /bin/sh sea_shell
WORKDIR /home/sea_shell

COPY ./sea_shell ./
COPY ./flag.txt ./

RUN chown -R root:sea_shell /home/sea_shell && \
     chmod 750 /home/sea_shell && \
     chmod 550 /home/sea_shell/sea_shell && \
     chown root:sea_shell /home/sea_shell/flag.txt && \
     chmod 440 /home/sea_shell/flag.txt

EXPOSE 8000

CMD ["socat", "-T60", "TCP-LISTEN:8000,reuseaddr,fork,su=sea_shell","EXEC:/home/sea_shell/sea_shell"]
