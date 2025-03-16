from kendaraan import kendaraan

class motor(kendaraan):
    def __init__(self, id_kendaraan="", merk="", plat_nomor="", tahun_produksi=0, warna="", jumlah_roda=0, tipe=""):
        super().__init__(id_kendaraan, merk, plat_nomor, tahun_produksi, warna, jumlah_roda)
        self.tipe = tipe

    # Getter method
    def get_tipe(self):
        return self.tipe

    # Setter method
    def set_tipe(self, tipe):
        self.tipe = tipe
