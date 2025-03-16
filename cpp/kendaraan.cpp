#pragma once
#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

class kendaraan{
    private:
        string id_kendaraan;
        string merk;
        string plat_nomor;
        int tahun_produksi;
        string warna;
        int jumlah_roda;

    // CONSTRUCTOR
    public:
        kendaraan(){
            this->id_kendaraan ="";
            this->merk = "";
            this->plat_nomor = "";
            this->tahun_produksi =0;
            this->warna = "";
            this->jumlah_roda =0;
        }

        kendaraan(string id_kendaraan, string merk, string plat_nomor, int tahun_produksi, string warna, int jumlah_roda){
            this->id_kendaraan = id_kendaraan;
            this->merk = merk;
            this->plat_nomor = plat_nomor;
            this->tahun_produksi = tahun_produksi;
            this->warna = warna;
            this->jumlah_roda = jumlah_roda;
        }

        // DESTRUCTOR
        virtual ~kendaraan() {}

    // GETTER
    string get_id_kendaraan(){
        return id_kendaraan; 
    }

    string get_merk(){
        return merk; 
    }

    string get_plat_nomor(){
        return plat_nomor; 
    }

    int get_tahun_produksi(){
        return tahun_produksi; 
    }

    string get_warna(){
        return warna; 
    }

    int get_jumlah_roda(){
        return jumlah_roda;
    }

    // SETTER
    void set_id_kendaraan(string id_kendaraan){
        this->id_kendaraan = id_kendaraan;
    }

    void set_merk(string merk){
        this->merk = merk;
    }

    void set_plat_nomor(int plat_nomor){
        this->plat_nomor = plat_nomor;
    }

    void set_tahun_produksi(int tahun_produksi){
        this->tahun_produksi = tahun_produksi;
    }

    void set_warna(string warna){
        this->warna = warna;
    }

    void set_jumlah_roda(int jumlah_roda){
        this->jumlah_roda = jumlah_roda;
    }
};
