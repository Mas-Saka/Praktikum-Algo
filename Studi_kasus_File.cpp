#include <iostream>
using namespace std;

void tambahkontak(){

};
int main (){
    do{
    int pilih;
    cout << "Sistem Manajemen Kontak\n";
    cout << "1. Tambah Kontak\n";
    cout << "2. Tampilkan Semua Kontak\n";
    cout << "3. Keluar\n";
    cout << "Pilih Menu :"; cin >> pilih;
    
    
    switch (pilih)
    {
        case 1 :

        break;
        case 2 :

        break;

        case 3 :
        cout << "Terimakasih !!";
        break;
        default :
        cout << "Masukkan angka yang sesuai";
        break;

    }
}while(pilih !=3);
    return 0;
}