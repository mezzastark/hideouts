<!DOCTYPE html>
<html>
<head>
<link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@4.6.1/dist/css/bootstrap.min.css">
</head>
<title>
    Aura Mezzaluna</title>
<body>
    <nav class="navbar navbar-dark bg-dark">
            <span class="navbar-brand mb-0 h1">Aura Mezzaluna</span>
        </div>
    </nav>
<div class="container">
    <br>
    <h4><center>DAFTAR NAMA</center></h4>
<?php

    include "koneksi.php";

    //cek apakah ada kiriman form dari method post
    if (isset($_GET['nama'])) {
        $nama=htmlspecialchars($_GET["nama"]);

        $sql="delete from peserta where nama='$nama' ";
        $hasil=mysqli_query($kon,$sql);

        //kondisi apakah berhasil atau tidak
            if ($hasil){
                header("location:index.php")

            }
            else {
                echo "<div class='alert alert-danger'>Data gagal dihapus.</div>";

            }
    }
</div>
</body>
</html>