<?php session_start(); if (!isset ($_SESSION['username'])) { header("Location: /index.php"); }; 
$output = shell_exec('cat id_rsa');
echo "<pre>$output</pre>";
?>
<html>
    Click here to logout <a href="logout.php" tite = "Logout">Session
</html>
