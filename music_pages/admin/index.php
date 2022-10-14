<?php
session_start();
?>
<html>
    <head>
	<link href="https://fonts.googleapis.com/css?family=IBM+Plex+Sans" rel="stylesheet">
	<link rel="stylesheet" type="text/css" href="style.css">
    </head>
    <body>
	<div class="menu">
	    <a href="index.php">index</a>
	    <a href="index.php?view=music1.html">link1</a>
	    <a href="index.php?view=music2.html">link2</a>
            <a href="index.php?view=music3.html">link3</a>
            <a href="index.php?view=music4.html">link4</a>
	</div>
<?php

if(!isset($_GET['view']) || ($_GET['view']=="index.php")) {
   echo" <p><b>Welcome to our main page!</b><br><br>Discover new files/music from here ;)</p>";
}
else {
	echo "<p>";
	include("/var/www/html/" .$_GET['view']);
	echo "</p>";
}
?>
    </body>
</html>
