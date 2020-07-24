FROM ubuntu:18.04
MAINTAINER Anonimbus

RUN apt-get update && apt-get install -y socat

RUN useradd -ms /bin/sh booof
WORKDIR /home/booof

COPY ./booof ./
RUN echo enc0re{d4mn_y0u_jus7_fl00ded_th15} > /home/booof/flag.txt

RUN chown -R root:booof /home/booof && \
     chmod 750 /home/booof && \
     chmod 550 /home/booof/booof && \
     chown root:booof /home/booof/flag.txt && \
     chmod 440 /home/booof/flag.txt

EXPOSE 8000

CMD ["socat", "-T60", "TCP-LISTEN:8000,reuseaddr,fork,su=booof","EXEC:/home/booof/booof"]