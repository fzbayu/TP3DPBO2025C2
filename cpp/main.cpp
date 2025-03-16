#include <iostream>
#include <vector>
#include "orang.cpp"
#include "kendaraan.cpp"
#include "mobil.cpp"
#include "motor.cpp"
#include "penjualMobilBekas.cpp"
#include "pengusahaRentalKendaraan.cpp"

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    mobil* mobil1 = new mobil("M001", "Toyota Camry", "B 0022 GA", 2020, "Merah", 4, 4, "Matic");
    mobil* mobil2 = new mobil("M002", "Honda Civic", "B 1234 XY", 2018, "Hitam", 4, 4, "Manual");
    mobil* mobil3 = new mobil("M003", "Suzuki Swift", "D 5678 ZT", 2021, "Putih", 4, 4, "Matic");
    mobil* mobil4 = new mobil("M004", "Mitsubishi Pajero", "F 9999 ZZ", 2017, "Silver", 4, 4, "Manual");
    mobil* mobil5 = new mobil("M005", "Nissan X-Trail", "A 8888 BC", 2019, "Biru", 4, 4, "Matic");

    motor* motor1 = new motor("MTR01", "Yamaha NMax", "B 1234 XY", 2021, "Hitam", 2, "Skuter");
    motor* motor2 = new motor("MTR02", "Honda Beat", "D 5678 AB", 2019, "Putih", 2, "Matic");
    motor* motor3 = new motor("MTR03", "Suzuki GSX-R150", "A 9999 ZZ", 2020, "Biru", 2, "Sport");
    motor* motor4 = new motor("MTR04", "Kawasaki Ninja 250", "F 8888 GH", 2018, "Hijau", 2, "Sport");
    motor* motor5 = new motor("MTR05", "Vespa Primavera", "E 1111 CD", 2022, "Merah", 3, "Klasik");

    vector<kendaraan*> daftarKendaraan = {mobil1, motor2, new mobil("M032", "Mitsubishi Lancer Evo 9", "D 000 SS", 2000, "Silver", 4, 4, "Manual"), motor3, mobil5};

    pengusahaRentalKendaraan pengusaha1("32303724", "Sudarsono", "Jl.Merpati Indah No.32", "Rental Jaya Abadi Putra", daftarKendaraan);

    cout << "==========================================" << endl;
    cout << "|  Data Pengusaha Rental Kendaraan       |" << endl;
    cout << "==========================================" << endl;

    cout << left;
    cout << setw(20) << "No. KTP" << ": " << pengusaha1.get_noKTP() << endl;
    cout << setw(20) << "Nama" << ": " << pengusaha1.get_nama() << endl;
    cout << setw(20) << "Alamat" << ": " << pengusaha1.get_alamat() << endl;
    cout << setw(20) << "Nama Usaha" << ": " << pengusaha1.get_nama_rental() << endl;
    cout << "------------------------------------------" << endl;

    cout << "------ Daftar Kendaraan yang disewa:------" << endl;
    for (auto kendaraan : pengusaha1.get_list_kendaraan()) {  
        cout << "ID             : " << kendaraan->get_id_kendaraan() << endl;
        cout << "Merk           : " << kendaraan->get_merk() << endl;
        cout << "Plat Nomor     : " << kendaraan->get_plat_nomor() << endl;
        cout << "Tahun Produksi : " << kendaraan->get_tahun_produksi() << endl;
        cout << "Warna          : " << kendaraan->get_warna() << endl;
        cout << "Jumlah Roda    : " << kendaraan->get_jumlah_roda() << endl;

        // Cek apakah kendaraan adalah mobil atau motor menggunakan dynamic_cast
        if (mobil* mMobil = dynamic_cast<mobil*>(kendaraan)) {
            cout << "Jenis          : Mobil" << endl;
            cout << "Jumlah Pintu   : " << mMobil->get_jumlah_pintu() << endl;
            cout << "Transmisi      : " << mMobil->get_transmisi() << endl;
        } 
        else if (motor* mMotor = dynamic_cast<motor*>(kendaraan)) {
            cout << "Jenis          : Motor" << endl;
            cout << "Tipe           : " << mMotor->get_tipe() << endl;
        }

        cout << "---------------------------------------" << endl;
    }

    vector<mobil*> daftarMobil = {
        new mobil("M001", "Toyota Avanza", "B 1234 AB", 2018, "Hitam", 4, 5, "Automatic"),
        new mobil("M002", "Honda Jazz", "D 5678 CD", 2017, "Putih", 4, 5, "Manual"),
        new mobil("M003", "Suzuki Ertiga", "F 9101 EF", 2019, "Silver", 4, 5, "Automatic")
    };

    penjualMobilBekas penjual("2324235436", "Budi Santoso", "Jl. Mawar No.45", "2329329", daftarMobil);

    cout << "==========================================" << endl;
    cout << "|  Data Penjual Mobil Bekas              |" << endl;
    cout << "==========================================" << endl;

    cout << left;
    cout << setw(20) << "No. KTP" << ": " << penjual.get_noKTP() << endl;
    cout << setw(20) << "Nama" << ": " << penjual.get_nama() << endl;
    cout << setw(20) << "Alamat" << ": " << penjual.get_alamat() << endl;
    cout << setw(20) << "No Izin Usaha" << ": " << penjual.get_no_izin_usaha() << endl;
    cout << "------------------------------------------" << endl;

    cout << "------ Daftar Mobil Bekas Dijual: ------" << endl;
    for (auto mobil : penjual.get_list_mobil()) {
        cout << "ID             : " << mobil->get_id_kendaraan() << endl;
        cout << "Merk           : " << mobil->get_merk() << endl;
        cout << "Plat Nomor     : " << mobil->get_plat_nomor() << endl;
        cout << "Tahun Produksi : " << mobil->get_tahun_produksi() << endl;
        cout << "Warna          : " << mobil->get_warna() << endl;
        cout << "Jumlah Roda    : " << mobil->get_jumlah_roda() << endl;
        cout << "Jumlah Pintu   : " << mobil->get_jumlah_pintu() << endl;
        cout << "Transmisi      : " << mobil->get_transmisi() << endl;
        cout << "---------------------------------------" << endl;
    }


    return 0;
}
