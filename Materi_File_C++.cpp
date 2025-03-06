#include <iostream>
using namespace std;

 struct kontak {
    string nama;
    char nomor[15];
};

main (){
    system("cls");
    FILE *fptr;
    fptr = fopen("data.exe","r+");

    // MEMBUKA FILE
    // if(fptr == NULL) {
        
    //     cout << "file gagal dibuka\n\n";
    // } else {
    //     cout << "file sukses dibuka\n\n";
    // }

    // fclose(fptr);


    // MENULISKAN FILE
    //buat mengisi data bertipe int, dan untuk memasukkan variabel yang dimasukkan user.
    // int nomor_rumah;

    // cin >> nomor_rumah;
    // fprintf(fptr,"\nJalan Rumah : %s, Nomor Rumah : %d", "Komputer", 20); 
    // fputs("\nbaris baru",fptr); // fputs bila digunakan untuk cin user tidak bisa fleksibel

    // TULIS BINER
    // fptr = fopen("data.txt","wb");
    // char nama[10] = "Bagus";
    // fwrite(&nama, sizeof(char), sizeof(nama), fptr);
    // fclose(fptr);
    
    // //BACA BINER 
    // fptr = fopen("data.txt","rb");
    // char setornama[10];
    // while (fread(&setornama, sizeof(char), 1, fptr))
    // {
    //     cout << setornama;
    // }
    // fclose(fptr);

    //MEMBACA FILE
    // char alamat[50];
    // while(fscanf(fptr,"%s",alamat) != EOF)
    // {
    // cout << alamat << " ";
    // }

    // while(fgets(alamat,sizeof(alamat), fptr) != NULL)
    // {
    // cout << alamat << " ";
    // }

    //MENGUBAH NAMA FILE 
    // rename("data.txt","databutbette");
    // const char * alamat = "data2.txt";
    
    // MENGHAPUS FILE
    // remove("data2.txt");
}       