<?php

define('MY_USER_AGENT', 'Samsung smart fridge');
define('REDIRECT_LOCATION', 'chall.en.coreis.us:5678');

if ($_SERVER['HTTP_USER_AGENT'] !== MY_USER_AGENT) {
    header('Location: ' . REDIRECT_LOCATION);
    die();
}
?>


        enc0re{s4mssUngg_5MM0r7_Fr1dg3}