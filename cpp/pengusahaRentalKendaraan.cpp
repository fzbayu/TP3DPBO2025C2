#pragma once
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include "orang.cpp"
#include "kendaraan.cpp"

using namespace std;

class pengusahaRentalKendaraan : public orang
{
    private:
        string nama_rental;
        vector <kendaraan*> listKendaraan;

    // CONSTRUCTOR
    public:
        pengusahaRentalKendaraan(){
        }

        pengusahaRentalKendaraan(string noKTP, string nama, string alamat, string nama_rental, vector <kendaraan*> listKendaraan)
        : orang(noKTP, nama, alamat){
            this->nama_rental = nama_rental;
            this->listKendaraan = listKendaraan;
        }

        // DESTRUCTOR
        ~pengusahaRentalKendaraan(){
        }

    // GETTER
    string get_nama_rental(){
        return nama_rental; 
    }

    vector<kendaraan*> get_list_kendaraan(){
        return listKendaraan; 
    }


    // SETTER
    void set_nama_rental(string nama_rental){
        this->nama_rental = nama_rental;
    }

    void set_list_kendaraan(vector <kendaraan*> listKendaraan){
        this->listKendaraan = listKendaraan;
    }

};
