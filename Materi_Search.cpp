#include <iostream>
using namespace std;
#define MAX 10

int sequential_tanpasentinel(int array[], int data_yang_dicari)
{
int i=0;
bool search = false;
    int i = 0;
    array[MAX] = data_yang_dicari;
    while (search == false && i < MAX) {
        if (array[i] == data_yang_dicari) {
            cout<< "data ditemukan pada indeks ke-" << i << endl;
            search = true;
            return i; 
        }
        i++;
    }
}

int sequential_sentinel(int array[], int data_yang_dicari)
{
    int j=0;
   array[MAX] = data_yang_dicari;
   bool search_sentinel = false;
   while ( search_sentinel == false)
   {
    if(array[j] == data_yang_dicari){
        search_sentinel = true;
        if(j < MAX){
            cout << "data ditemukan pada indeks ke-" << j << endl;
    }else{
        cout << "data tidak ditemukan" << endl; 
    }
} j++;
}

}

int sequential_binarty_search(int array[], int data_yang_dicari) {
    int indeks_awal = 0;
    int indeks_akhir = MAX;

    int nilai_tengah = (indeks_akhir + indeks_awal) / 2;
    bool search = false;

    while(search==false && indeks_awal <= indeks_akhir){
        int nilai_tengah = ((indeks_akhir + indeks_awal) / 2);
        if(array[nilai_tengah] == data_yang_dicari){
            cout << "data ditemukan pada indeks ke-" << nilai_tengah << endl;
            return nilai_tengah;
    } else{
        if (data_yang_dicari <= array[nilai_tengah]){
            indeks_akhir = nilai_tengah - 1;
        } else{
            indeks_awal = nilai_tengah + 1;
        }
    }
    }cout << "data tidak ditemukan" << endl;




int main () {
    system("cls");
   //sequential search tanpa sentinel 
    int array[MAX] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int data_yang_dicari;
    cout << "Masukkan data yang dicari: ";
    cin >> data_yang_dicari;
    sequential_tanpasentinel(int array[], int data_yang_dicari);

   //sequential search dengan sentinel
    sequential_sentinel(int array[], int data_yang_dicari);
    //sequential binary search
    sequential_binarty_search(int array[], int data_yang_dicari);

    return 0;
}