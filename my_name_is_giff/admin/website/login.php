<?php
session_start();
$errorMsg = "";
$validUser = $_SESSION["login"] === true;
if(isset($_POST["sub"])) {
  $validUser = $_POST["username"] == "mY3_na1m_i5_yeif..." && $_POST["password"] == "p4w5_w0rd";
  if(!$validUser) $errorMsg = "Invalid username or password.";
  else $_SESSION["login"] = true;
}
if($validUser) {
   header("Location: /flag.php"); die();
}
?>
<!DOCTYPE html>
<html lang="en">
<head>
  <title>taituru</title>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="assets/bootstrap.min.css">
  <link rel="bodycenter" href="">
  <script src="assets/jquery.min.js"></script>
  <script src="assets/bootstrap.min.js"></script>
</head>
<body>

  <div class="container">
  </br><img width="300" src="assets/jeff.gif"><h3>my name is giff</h3></br>
    <form name="input" action="" method="post">
      <label for="username">Username:</label><input type="text" class="form-control" value="<?= $_POST["username"] ?>" id="username" name="username" />
      <label for="password">Password:</label><input type="password" class="form-control" value="" id="password" name="password" />

      <?php
        if($errorMsg) { ?>
        </br><div class="alert alert-danger" role="alert">
          <?= $errorMsg ?>
        </div>
      <?php
        }
      ?>

    </br><input type="submit" value="Login" class="btn btn-success" name="sub"/>
    </form>
  </div>

</body>
</html>
