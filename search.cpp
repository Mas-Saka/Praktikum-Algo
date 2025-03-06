#include <iostream>
using namespace std;
#define MAX 10



main () {
   system("cls");
   //sequential search tanpa sentinel 
    int array[MAX] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    bool search = false;
    int i = 0;
    int data_yang_dicari = 5;
    while (search == false && i < MAX) {
        if (array[i] == data_yang_dicari) {
            cout<< "data ditemukan pada indeks ke-" << i << endl;
            search = true; 
        }
        i++;
   }


   //sequential search dengan sentinel
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
    return 0;
}