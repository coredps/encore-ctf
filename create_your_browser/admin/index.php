<?php

define('MY_USER_AGENT', 'Samsung smart fridge');
define('REDIRECT_LOCATION', 'https://mcow.ml/');

if ($_SERVER['HTTP_USER_AGENT'] !== MY_USER_AGENT) {
    header('Location: ' . REDIRECT_LOCATION);
    die();
}
?>

<html>
<title>Create a browser</title>
    <body>
        This website is only accessible using <br>
        Samsung smart television fridge
        enc0re{mc0w_mL_dD05inG}
    </body>
<html>