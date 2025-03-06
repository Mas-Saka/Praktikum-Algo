#include <iostream>
#include <algorithm>
using namespace std;
    
    struct judul{
        string judul_lagu, penyanyi, genre;
        int tahun;
    };
    
    const int lagu_maks=5;
    judul daftarlagu[lagu_maks];
    int banyak_lagu =0;

    
    void tambahlagu(){
        string kembali;
        do{
        if (banyak_lagu >= lagu_maks){
            cout << "Jumlah lagu sudah Maksimal\n";
            return;
        }
        judul* isilagu = &daftarlagu[banyak_lagu];
        cout << "Isikan Judul Lagu :";
        cin.ignore();
        getline(cin,(*isilagu).judul_lagu);
        cout << "Isikan Penyanyi :";
        getline(cin,(*isilagu).penyanyi);
        cout << "Isikan Genre :";
        getline(cin,(*isilagu).genre);
        cout << "Isikan Tahun Perilisan :";
        cin >> (*isilagu).tahun;
        banyak_lagu ++;
        cout << "\nHoree!! Lagu Berhasil Ditambahkan\n";

        cout << "\nIngin Kembali Ke Menu Utama? (iya/tidak) :"; cin >> kembali;
    }while (kembali != "iya");
    }

    void urutinlagu() {
        for(int i=0;i<banyak_lagu-1; i++){
            for(int j = 0; j < banyak_lagu - i - 1; j++){
                if ((*(daftarlagu+j)).judul_lagu > (*(daftarlagu+ j + 1)).judul_lagu)
                {
                 judul sementara = *(daftarlagu+j);
                 *(daftarlagu+j)=*(daftarlagu+j+1);
                 *(daftarlagu+j+1)= sementara;
                }
            }
        }
    }

    void tampillagu(){
        if (banyak_lagu==0) {
            cout << "Belum ada daftar lagu yang ditambahkan\n";
            return;
        }
        urutinlagu();
        cout << "Daftar Playlist Lagu :\n";
        for (int i=0; i<banyak_lagu;i++){
            cout<< i+1 << "." <<" Judul Lagu : " << (*(daftarlagu+i)).judul_lagu<< " | "
            <<"Nama Penyanyi : "<<(*(daftarlagu+i)).penyanyi<< " | "
            <<"Genre : "<<(*(daftarlagu+i)).genre<< " | "
            <<"Tahun Rilis :" <<(*(daftarlagu+i)).tahun << endl;
        }
    }

    void pencarilagu(){
        string kembali;
        do {
        if(banyak_lagu==0){
            cout << "Tak ada lagu dalam playlist\n";
            return;
        }

        string pencari;
        cout << "Masukkan Judul yang ingin anda cari :";
        cin.ignore();
        getline(cin, pencari);
    

    bool ditemui = false;
    for (int i = 0; i < banyak_lagu; i++) {
        if((*(daftarlagu+i)).judul_lagu == pencari){
            cout << "==================================\n";
            cout << "Daftar Lagu Ditemukan:\n ";
            cout << "Judul Lagu : "<< (*(daftarlagu + i)).judul_lagu << endl;
            cout << "Nama Penyanyi : "<< (*(daftarlagu + i)).penyanyi << endl;
            cout << "Genre : "<< (*(daftarlagu + i)).genre << endl;
            cout << "Tahun Rilis : "<<(*(daftarlagu + i)).tahun << endl;
            ditemui = true;
            break;
        }
    }
    if (!ditemui){
        cout << "Lagu yang anda cari tidak ditemukan.\n";
    } cout << "\nIngin Kembali Ke Menu Utama? (iya/tidak) :"; cin >> kembali;
}while(kembali != "iya");
    }

int main (){
    system ("cls");
    int pilih;
    string kembali;
    
    
    do {
    cout << "\n==================================";
    cout << "\n## Menu Utama Playlist Musik ##";
    cout << "\n==================================\n";
    if(banyak_lagu>0) {
        for (int i=0 ;i<banyak_lagu;i ++) {
                        cout << i+1 << ". " << daftarlagu[i].judul_lagu << "- " << daftarlagu[i].penyanyi << endl;
        }
    }
    cout << "\t\n1.) tambah Lagu";
    cout << "\t\n2.) Cari Lagu";
    cout << "\t\n3.) Keluar\n"; 
    cout << "Pilih Menu : " ; cin >> pilih;

    switch (pilih)
    {
    case 1 :
        tambahlagu();
        break;
    case 2 :
        pencarilagu();
        break;
    case 3 :
        cout << "\nTerimakasih Telah Menggunakan Layanan Kami\n";
        break;
    default:
        cout << "\nNomor yang Diinputkan Salah";
        break;
    }

    }while (pilih!=3);


    
}