FROM php:7.4-apache

# Use the default production configuration
RUN mv "$PHP_INI_DIR/php.ini-production" "$PHP_INI_DIR/php.ini"

ENV PASSWORD extensions
COPY ./index.php /var/www/html
COPY css/ /var/www/html/css
COPY .htaccess /var/www/html
RUN mkdir -p /var/www/html/uploads
RUN chmod -R 777 /var/www/html/uploads

RUN chmod 1733 /tmp /var/tmp /dev/shm

RUN mkdir /ctf
RUN useradd -M -d /ctf ctf
RUN echo ctf:encore | chpasswd 

RUN cp -r /usr/bin/* /ctf

RUN mkdir -p /ctf/dream/sapnap
RUN mkdir -p /ctf/dream/george
RUN mkdir -p /ctf/techo/wilbur/
RUN mkdir -p /ctf/bruh/sound/effect3
RUN mkdir -p /ctf/fed/sad
RUN mkdir -p /ctf/yassuo/some/folder/name
RUN mkdir -p /ctf/ohmie/ripraw/sudden/collapse
RUN echo enc0re{f1ile_Upl04d_vuLns_ar3_sh3xy} > /ctf/ohmie/ripraw/sudden/collapse/flag.txt

RUN chown -R root:ctf /ctf && \
  chmod -R 755 /ctf

RUN chown root:www-data /ctf/ohmie/ripraw/sudden/collapse/flag.txt && \
  chmod -R 440 /ctf/ohmie/ripraw/sudden/collapse/flag.txt
EXPOSE 80
