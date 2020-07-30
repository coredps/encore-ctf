FROM php:7.4-apache

# Use the default production configuration
RUN mv "$PHP_INI_DIR/php.ini-production" "$PHP_INI_DIR/php.ini"
COPY . /var/www/html

RUN apt-get update && apt-get install -y openssh-server
RUN mkdir /var/run/sshd

RUN mkdir -p /home/smh/.ssh
RUN useradd -M -d /home/smh smh

RUN echo enc0re{l00k_h0w_4a3s0me_pR1v_k3ys_are} > /home/smh/flag.txt

RUN mv /var/www/html/id_rsa /var/www/html/id_rsa.pub /home/smh/.ssh/

RUN chmod go-rx /usr/bin/passwd

RUN chown -R root:smh /home/smh

RUN chmod -R 750 /home/smh/

RUN chmod 1733 /tmp /var/tmp /dev/shm

RUN cp /home/smh/.ssh/id_rsa /var/www/html/ && chown www-data:www-data /var/www/html/id_rsa

RUN echo "ServerName localhost" >> /etc/apache2/apache2.conf
RUN service apache2 start

EXPOSE 22
CMD ["/usr/sbin/sshd", "-D"]