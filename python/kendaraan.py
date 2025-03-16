class kendaraan:
    def __init__(self, id_kendaraan="", merk="", plat_nomor="", tahun_produksi=0, warna="", jumlah_roda=0):
        self.id_kendaraan = id_kendaraan
        self.merk = merk
        self.plat_nomor = plat_nomor
        self.tahun_produksi = tahun_produksi
        self.warna = warna
        self.jumlah_roda = jumlah_roda

    # GETTER
    def get_id_kendaraan(self):
        return self.id_kendaraan

    def get_merk(self):
        return self.merk

    def get_plat_nomor(self):
        return self.plat_nomor

    def get_tahun_produksi(self):
        return self.tahun_produksi

    def get_warna(self):
        return self.warna

    def get_jumlah_roda(self):
        return self.jumlah_roda

    # SETTER
    def set_id_kendaraan(self, id_kendaraan):
        self.id_kendaraan = id_kendaraan

    def set_merk(self, merk):
        self.merk = merk

    def set_plat_nomor(self, plat_nomor):
        self.plat_nomor = plat_nomor

    def set_tahun_produksi(self, tahun_produksi):
        self.tahun_produksi = tahun_produksi

    def set_warna(self, warna):
        self.warna = warna

    def set_jumlah_roda(self, jumlah_roda):
        self.jumlah_roda = jumlah_roda