#include <iostream>
using namespace std;
#define MAX 5

struct Buku {
    string judul;
    int harga;
};

Buku buku[5]{
    {"laskar pelangi", 45000},
    {"sang pemimpi", 50000},
    {"perahu kertas", 55000},
    {"ayat-ayat cinta", 60000},
    {"5 cm", 65000},
    };
main() {
    system("cls");
    string judul_buku;
    int harga, pilihan, indeks_awal, 
    indeks_akhir, indeks_nilai_tengah;
    bool search = false;
    
    
cout << "##Selamat Datang di Toko Buku##" << endl;
cout << "Pilih cara mencari buku: " << endl; 
cout << "1. Cari berdasarkan judul" << endl;
cout << "2. Cari berdasarkan harga" << endl;
cout << "Pilihan: "; cin >> pilihan;
 
if (pilihan == 1) {
    cout << "Masukkan judul buku yang dicari: "; cin >> judul_buku;
    for (int i = 0; i < 5; i++) {
        if (judul_buku == buku[i].judul) {
            cout << "Buku ditemukan dengan harga = " << buku[i].harga << endl;
        }
    }
} else if (pilihan == 2) {
    cout << "Masukkan harga buku yang dicari: "; cin >> harga;
    for (int i = 0; i < 5; i++) {
        if (harga == buku[i].harga) {
            cout << "Buku ditemukan dengan judul = " << buku[i].judul << endl;
        }
    }
} else {
    cout << "Pilihan tidak tersedia" << endl;
}
}