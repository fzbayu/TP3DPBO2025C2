from orang import orang
from kendaraan import kendaraan

class pengusahaRentalKendaraan(orang):
    def __init__(self, no_ktp="", nama="", alamat="", nama_rental="", list_kendaraan=None):
        super().__init__(no_ktp, nama, alamat)
        self.nama_rental = nama_rental
        self.list_kendaraan = list_kendaraan if list_kendaraan is not None else []

    # Getter methods
    def get_nama_rental(self):
        return self.nama_rental

    def get_list_kendaraan(self):
        return self.list_kendaraan

    # Setter methods
    def set_nama_rental(self, nama_rental):
        self.nama_rental = nama_rental

    def set_list_kendaraan(self, list_kendaraan):
        self.list_kendaraan = list_kendaraan
