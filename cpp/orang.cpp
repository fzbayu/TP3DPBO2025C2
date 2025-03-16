#pragma once
#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

class orang{
    private:
        string noKTP;
        string nama;
        string alamat;

    // CONSTRUCTOR
    public:
        orang(){
            this->noKTP ="";
            this->nama = "";
            this->alamat = "";
        }

        orang(string noKTP, string nama, string alamat){
            this->noKTP = noKTP;
            this->nama = nama;
            this->alamat = alamat;
        }

        // DESTRUCTOR
        ~orang(){
        }

    // GETTER
    string get_noKTP(){
        return noKTP; 
    }

    string get_nama(){
        return nama; 
    }

    string get_alamat(){
        return alamat; 
    }

    // SETTER
    void set_noKTP(string noKTP){
        this->noKTP = noKTP;
    }

    void set_nama(string nama){
        this->nama = nama;
    }

    void set_alamat(string alamat){
        this->alamat = alamat;
    }
};
