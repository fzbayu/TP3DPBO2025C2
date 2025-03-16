#pragma once
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include "kendaraan.cpp"

using namespace std;

class mobil : public kendaraan{
    private:
        int jumlah_pintu;
        string transmisi;

    // CONSTRUCTOR
    public:
        mobil(){
            this->jumlah_pintu =0;
            this->transmisi = "";
        }

        mobil(string id_kendaraan, string merk, string plat_nomor, int tahun_produksi, string warna, int jumlah_roda, int jumlah_pintu, string transmisi)
        : kendaraan(id_kendaraan, merk, plat_nomor, tahun_produksi, warna, jumlah_roda){
            this->jumlah_pintu = jumlah_pintu;
            this->transmisi = transmisi;
        }

        // DESTRUCTOR
        ~mobil(){
        }

    // GETTER
    int get_jumlah_pintu(){
        return jumlah_pintu; 
    }

    string get_transmisi(){
        return transmisi; 
    }


    // SETTER
    void set_jumlah_pintu(int jumlah_pintu){
        this->jumlah_pintu = jumlah_pintu;
    }

    void set_transmisi(string transmisi){
        this->transmisi = transmisi;
    }

};
