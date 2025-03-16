from orang import orang
from kendaraan import kendaraan
from mobil import mobil
from motor import motor
from pengusahaRentalKendaraan import pengusahaRentalKendaraan
from penjualMobilBekas import penjualMobilBekas

def main():
    # Membuat objek mobil
    mobil1 = mobil("M001", "Toyota Camry", "B 0022 GA", 2020, "Merah", 4, 4, "Matic")
    mobil2 = mobil("M002", "Honda Civic", "B 1234 XY", 2018, "Hitam", 4, 4, "Manual")
    mobil3 = mobil("M003", "Suzuki Swift", "D 5678 ZT", 2021, "Putih", 4, 4, "Matic")
    mobil4 = mobil("M004", "Mitsubishi Pajero", "F 9999 ZZ", 2017, "Silver", 4, 4, "Manual")
    mobil5 = mobil("M005", "Nissan X-Trail", "A 8888 BC", 2019, "Biru", 4, 4, "Matic")
    
    # Membuat objek motor
    motor1 = motor("MTR01", "Yamaha NMax", "B 1234 XY", 2021, "Hitam", 2, "Skuter")
    motor2 = motor("MTR02", "Honda Beat", "D 5678 AB", 2019, "Putih", 2, "Matic")
    motor3 = motor("MTR03", "Suzuki GSX-R150", "A 9999 ZZ", 2020, "Biru", 2, "Sport")
    motor4 = motor("MTR04", "Kawasaki Ninja 250", "F 8888 GH", 2018, "Hijau", 2, "Sport")
    motor5 = motor("MTR05", "Vespa Primavera", "E 1111 CD", 2022, "Merah", 3, "Klasik")
    
    # Daftar kendaraan untuk pengusaha rental
    daftar_kendaraan = [
        mobil1, 
        motor2, 
        mobil("M032", "Mitsubishi Lancer Evo 9", "D 000 SS", 2000, "Silver", 4, 4, "Manual"), 
        motor3, 
        mobil5
    ]
    
    # Membuat objek pengusaha rental
    pengusaha1 = pengusahaRentalKendaraan("32303724", "Sudarsono", "Jl.Merpati Indah No.32", "Rental Jaya Abadi Putra", daftar_kendaraan)
    
    # Menampilkan data pengusaha rental
    print("===========================================")
    print("|  Data Pengusaha Rental Kendaraan       |")
    print("===========================================")
    
    print(f"{'No. KTP':<20}: {pengusaha1.get_noKTP()}")
    print(f"{'Nama':<20}: {pengusaha1.get_nama()}")
    print(f"{'Alamat':<20}: {pengusaha1.get_alamat()}")
    print(f"{'Nama Usaha':<20}: {pengusaha1.get_nama_rental()}")
    print("------------------------------------------")
    
    # Menampilkan daftar kendaraan yang disewa
    print("------ Daftar Kendaraan yang disewa:------")
    for kendaraan in pengusaha1.get_list_kendaraan():
        print(f"ID             : {kendaraan.get_id_kendaraan()}")
        print(f"Merk           : {kendaraan.get_merk()}")
        print(f"Plat Nomor     : {kendaraan.get_plat_nomor()}")
        print(f"Tahun Produksi : {kendaraan.get_tahun_produksi()}")
        print(f"Warna          : {kendaraan.get_warna()}")
        print(f"Jumlah Roda    : {kendaraan.get_jumlah_roda()}")
        
        # Cek apakah kendaraan adalah mobil atau motor
        if isinstance(kendaraan, mobil):
            print(f"Jenis          : mobil")
            print(f"Jumlah Pintu   : {kendaraan.get_jumlah_pintu()}")
            print(f"Transmisi      : {kendaraan.get_transmisi()}")
        elif isinstance(kendaraan, motor):
            print(f"Jenis          : motor")
            print(f"Tipe           : {kendaraan.get_tipe()}")
        
        print("---------------------------------------")
    
    # Daftar mobil untuk penjual mobil bekas
    daftar_mobil = [
        mobil("M001", "Toyota Avanza", "B 1234 AB", 2018, "Hitam", 4, 5, "Automatic"),
        mobil("M002", "Honda Jazz", "D 5678 CD", 2017, "Putih", 4, 5, "Manual"),
        mobil("M003", "Suzuki Ertiga", "F 9101 EF", 2019, "Silver", 4, 5, "Automatic")
    ]
    
    # Membuat objek penjual mobil bekas
    penjual = penjualMobilBekas("2324235436", "Budi Santoso", "Jl. Mawar No.45", "2329329", daftar_mobil)
    
    # Menampilkan data penjual mobil bekas
    print("\n===========================================")
    print("|  Data Penjual mobil Bekas              |")
    print("===========================================")
    
    print(f"{'No. KTP':<20}: {penjual.get_noKTP()}")
    print(f"{'Nama':<20}: {penjual.get_nama()}")
    print(f"{'Alamat':<20}: {penjual.get_alamat()}")
    print(f"{'No Izin Usaha':<20}: {penjual.get_no_izin_usaha()}")
    print("------------------------------------------")
    
    # Menampilkan daftar mobil bekas yang dijual
    print("------ Daftar mobil Bekas Dijual: ------")
    for mobil in penjual.get_list_mobil():
        print(f"ID             : {mobil.get_id_kendaraan()}")
        print(f"Merk           : {mobil.get_merk()}")
        print(f"Plat Nomor     : {mobil.get_plat_nomor()}")
        print(f"Tahun Produksi : {mobil.get_tahun_produksi()}")
        print(f"Warna          : {mobil.get_warna()}")
        print(f"Jumlah Roda    : {mobil.get_jumlah_roda()}")
        print(f"Jumlah Pintu   : {mobil.get_jumlah_pintu()}")
        print(f"Transmisi      : {mobil.get_transmisi()}")
        print("---------------------------------------")


if __name__ == "__main__":
    main()