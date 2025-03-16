# JANJI
Saya Faiz Bayu Erlangga dengan NIM 2311231 mengerjakan Tugas Praktikum 3 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## DIAGRAM
![image](https://github.com/user-attachments/assets/5d0367f4-e7c3-418d-8314-4516622834cd)

## PENJELASAN ATRIBUT DAN METHODS

Setiap class memiliki atribut yang berbeda-beda :
- orang : noKTP, nama, alamat
- pengusahaRentalKendaraan : nama_rental, list_kendaraan
- penjualMobilBekas : no_izin_usaha, list_kendaraan
- kendaraan : id_kendaraan, merk, plat_nomor, tahun_produksi, warna, jumlah_roda
- mobil : jumlah_pintu, transmisi(matic, manual)
- motor : tipe(sport, klasik, dll)

Methods yang digunakan adalah setter dan getter untuk masing-masing atribut 

Kode yang dibuat menerapkan konsep pewarisan dalam pemrograman berorientasi objek (OOP), di mana kelas orang menjadi kelas induk yang memiliki atribut noktp, nama, dan alamat, yang kemudian diwarisi oleh kelas pengusahaRentalKendaraan dan penjualMobilBekas. Kelas pengusahaRentalKendaraan menambahkan atribut khusus berupa nama_rental dan list_kendaraan, yang menyimpan daftar kendaraan yang disewakan. Sementara itu, penjualMobilBekas memiliki atribut tambahan no_izin_usaha dan list_kendaraan, yang menyimpan daftar mobil bekas yang dijual.

Di sisi lain, kelas kendaraan bertindak sebagai kelas induk yang mencakup atribut dasar untuk semua jenis kendaraan, yaitu id_kendaraan, merk, plat_nomor, tahun_produksi, warna, dan jumlah_roda. Dari kelas ini, lahirlah dua kelas turunan, yaitu mobil dan motor, yang masing-masing memiliki karakteristik khusus. Kelas mobil menambahkan atribut jumlah_pintu dan transmisi, karena mobil memiliki pintu dan sistem transmisi yang berbeda-beda. Sedangkan kelas motor hanya menambahkan atribut tipe, yang merepresentasikan jenis motor seperti skuter, sport, atau klasik.

## PENJELASAN ALUR PROGRAM
Alur program dimulai dengan mengimpor berbagai kelas yang sudah dibuat sebelumnya, yaitu orang, kendaraan, mobil, motor, penjualMobilBekas, dan pengusahaRentalKendaraan. Setelah itu, fungsi main() dieksekusi, yang bertanggung jawab untuk membuat objek-objek yang diperlukan dalam program.

Pada tahap pertama, beberapa objek dari kelas mobil dan motor dibuat dengan memberikan nilai untuk setiap atribut yang sesuai. Misalnya, objek mobil1 dibuat dengan ID "M001", merk "Toyota Camry", plat nomor "B 0022 GA", tahun produksi 2020, warna merah, jumlah roda 4, jumlah pintu 4, dan transmisi matic. Begitu pula dengan objek-objek motor yang memiliki atribut khusus seperti tipe kendaraan.

Dftar kendaraan yang berisi campuran antara objek mobil dan motor dibuat untuk digunakan oleh objek pengusahaRentalKendaraan. Objek pengusaha1 kemudian dibuat dengan memasukkan informasi seperti nomor KTP, nama, alamat, nama rental, serta daftar kendaraan yang dimilikinya. Setelah objek ini dibuat, program mencetak informasi lengkap tentang pengusaha rental tersebut, termasuk daftar kendaraan yang disewakan.

Kemudian penjualMobilBekas. Beberapa objek mobil ditambahkan ke dalam daftar, lalu objek penjual dibuat dengan memasukkan informasi seperti nomor KTP, nama, alamat, nomor izin usaha, serta daftar mobil bekas yang dijual. Setelah itu, informasi mengenai penjual dan daftar mobil yang tersedia ditampilkan di layar.

## DOKUMENTASI CPP
![image](https://github.com/user-attachments/assets/9afa6b93-e375-4db9-a14a-39831658835b)
![image](https://github.com/user-attachments/assets/af88efd7-f943-4427-bbd1-58a5bd1857b0)

## DOKUMENTASI PYTHON
![image](https://github.com/user-attachments/assets/645d3809-489f-4a1e-bb3d-59a211351b15)


