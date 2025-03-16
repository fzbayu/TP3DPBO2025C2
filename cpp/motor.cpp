#pragma once
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include "kendaraan.cpp"

using namespace std;

class motor : public kendaraan{
    private:
        string tipe;

    // CONSTRUCTOR
    public:
        motor(){
            this->tipe = "";
        }

        motor(string id_kendaraan, string merk, string plat_nomor, int tahun_produksi, string warna, int jumlah_roda, string tipe)
        : kendaraan(id_kendaraan, merk, plat_nomor, tahun_produksi, warna, jumlah_roda){
            this->tipe = tipe;
        }

        // DESTRUCTOR
        ~motor(){
        }

    // GETTER
    string get_tipe(){
        return tipe; 
    }


    // SETTER
    void set_tipe(string tipe){
        this->tipe = tipe;
    }

};
