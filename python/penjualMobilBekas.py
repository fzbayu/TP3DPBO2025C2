from orang import orang
from mobil import mobil

class penjualMobilBekas(orang):
    def __init__(self, no_ktp="", nama="", alamat="", no_izin_usaha="", list_mobil=None):
        super().__init__(no_ktp, nama, alamat)
        self.no_izin_usaha = no_izin_usaha
        self.list_mobil = list_mobil if list_mobil is not None else []

    # Getter methods
    def get_no_izin_usaha(self):
        return self.no_izin_usaha

    def get_list_mobil(self):
        return self.list_mobil

    # Setter methods
    def set_no_izin_usaha(self, no_izin_usaha):
        self.no_izin_usaha = no_izin_usaha

    def set_list_mobil(self, list_mobil):
        self.list_mobil = list_mobil
