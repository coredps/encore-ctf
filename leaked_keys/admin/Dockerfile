FROM php:7.4-apache

# Use the default production configuration
RUN mv "$PHP_INI_DIR/php.ini-production" "$PHP_INI_DIR/php.ini"
COPY . /var/www/html

RUN apt-get update && apt-get install -y openssh-server
RUN mkdir /var/run/sshd

RUN mkdir -p /home/smh/
RUN useradd -M -d /home/smh smh

RUN echo enc0re{l00k_h0w_4a3s0me_pR1v_k3ys_are} > /home/smh/flag.txt

RUN yes y | ssh-keygen -f /home/smh/id_rsa -N

RUN chmod go-rx /usr/bin/passwd

RUN chown -R root:smh /home/smh

RUN chmod -R 750 /home/smh

RUN chmod 1733 /tmp /var/tmp /dev/shm

EXPOSE 22
CMD ["/usr/sbin/sshd", "-D"]
