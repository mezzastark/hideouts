<!DOCTYPE html>
<html>
<head>
    <title>Aura Mezzaluna</title>
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@4.6.1/dist/css/bootstrap.min.css">
</head>
<body>
<div class="container">
    <?php
    //include file koneksi, koneksi ke data base
    include"koneksi.php";

    //fungsi untuk mencegah inputan lain
    function input($data) {
        $data = trim($data);
        $data = stripcslashes($data);
        $data = htmlspecialchars($data);
        return $data;
    }
    //cek kiriman dari form method post
    if ($_SERVER["REQUEST_METHOD"] == "POST") {

        $nama=input($_POST["nama"]);
        $sekolah=input($_POST["sekolah"]);

        //query input menginput data ke tabel anggota
        $sql="insert into peserta (nama,sekolah) values
        ('$nama','$sekolah')";

        //menjalankan query di atas
        $hasil=mysqli_query($kon,$sql);
        
        //berhasil atau tidak query di atas
        if ($hasil){
            header("location:index.php");
        }
        else{
            echo "<div class='alert alert-danger'> Data gagal disimpan.</div>"

        }
        
    }
    ?>
    <h2>Input Data</h2>


    <form action="<?php echo $_SERVER["PHP_SELF"];?>" method="post">
        <div class="form-group">
            <label>Nama:</label>
            <input type="text" name="nama" class="form-control" placeholder="Masukan Nama" required />
            
</div>