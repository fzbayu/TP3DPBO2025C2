from kendaraan import kendaraan

class mobil(kendaraan):
    def __init__(self, id_kendaraan="", merk="", plat_nomor="", tahun_produksi=0, warna="", jumlah_roda=0, jumlah_pintu=0, transmisi=""):
        super().__init__(id_kendaraan, merk, plat_nomor, tahun_produksi, warna, jumlah_roda)
        self.jumlah_pintu = jumlah_pintu
        self.transmisi = transmisi

    # Getter
    def get_jumlah_pintu(self):
        return self.jumlah_pintu

    def get_transmisi(self):
        return self.transmisi

    # Setter
    def set_jumlah_pintu(self, jumlah_pintu):
        self.jumlah_pintu = jumlah_pintu

    def set_transmisi(self, transmisi):
        self.transmisi = transmisi
