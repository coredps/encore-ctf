<?php

define('MY_USER_AGENT', 'Samsung smart television fridge');
define('REDIRECT_LOCATION', 'https://www.wikihow.com/Make-a-Web-Browser');

if ($_SERVER['HTTP_USER_AGENT'] !== MY_USER_AGENT) {
    header('Location: ' . REDIRECT_LOCATION);
    die();
}
<html>
<title>Create a browser</title>
    <body>
        This website is only accessible using <br>
        Samsung smart television fridge
    </body>
<html>