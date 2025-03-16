#pragma once
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include "orang.cpp"
#include "kendaraan.cpp"

using namespace std;

class penjualMobilBekas : public orang
{
    private:
        string no_izin_usaha;
        vector <mobil*> listMobil;

    // CONSTRUCTOR
    public:
        penjualMobilBekas(){
        }

        penjualMobilBekas(string noKTP, string nama, string alamat, string no_izin_usaha, vector <mobil*> listMobil)
        : orang(noKTP, nama, alamat){
            this->no_izin_usaha = no_izin_usaha;
            this->listMobil = listMobil;
        }

        // DESTRUCTOR
        ~penjualMobilBekas(){
        }

    // GETTER
    string get_no_izin_usaha(){
        return no_izin_usaha; 
    }

    vector<mobil*> get_list_mobil(){
        return listMobil; 
    }


    // SETTER
    void set_no_izin_usaha(string no_izin_usaha){
        this->no_izin_usaha = no_izin_usaha;
    }

    void set_list_mobil(vector <mobil*> listMobil){
        this->listMobil = listMobil;
    }

};
