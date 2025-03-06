#include <iostream>
using namespace std;
void ganti(int *p){
    *p=50;
    cout<<p<<endl;
}

// char *nama_hari(int index){
//     char *nama_hari[]={
//         "senin", "selasa"
//     };
//     return nama_hari[index];
// }
void kuadrat(int *nilai){

    cout << "alamat dari value adalah : " << nilai << endl;

    *nilai = *nilai * *nilai;

}
int main(){
    // int *p,*q,*r; 
    // int n = 10;
    // p=&n;
    // //n=*p
    // *p=5;
    // cout<<*p<<endl;
    // cout<<n<<endl;
    // cout<<p<<endl;
    // cout<<&n<<endl;

    // int array[3] ={10,20,30} ;
    // int i;
    // int *k;

    // k=array;
    // for(i=0;i<3;i++){
    //     cout<<*(k+i)<<" ";
    // }

    // char kota[] = "Yogyakarta";
    // cout<<kota<<endl;
    // char *j = kota;
    // // cout<<*j;
    // int i;
    // for(i=0;i<10;i++){
    //     cout<<*(j+i)<<" ";
    // }

    // int x = 10;
    // cout<<x<<endl;
    // ganti(&x);
    // cout<<x<<endl;
    // cout<<&x<<endl;

    // int x=20;
    // int *i=&x;
    // int **ii = &i;
    // cout<<**ii<<endl;
    // cout<<"Alamat x : "<<&x<<endl;
    // cout<<"Alamat *i : "<<&i<<endl;
    // cout<<"Alamat **ii : "<<&ii<<endl;

    int pecahan []= {10000, 20000, 50000};
    int i =0;
    int terbesar,terkecil;
    for(i=0;i<3;i++){
        cout<<*(pecahan+i)<< " ";
    }
    cout<<endl;
    terbesar = *pecahan;
    terkecil = *pecahan;
    for(i=0;i<3;i++){
        if (*(pecahan + i)>terbesar){
            terbesar=*(pecahan + i);
        }
        if(*(pecahan + i)<terkecil){
            terkecil = *(pecahan + i);
        }
    }
    cout<<endl;
    for(i=0;i<3;i++){
        cout<<*(pecahan+i)<< " ";
    }
    cout<<endl;
    cout<<"nilai terbesar :"<<terbesar<<endl;
    cout<<"nilai terkecil :"<<terkecil<<endl;
cout<<endl;
    int jumlah=0;
    for(i=0;i<3;i++){
        jumlah = jumlah + *(pecahan+i);
    }

    
    float rata = jumlah/3;
    cout<<"jumlah :"<<jumlah<<endl;
    cout<<"rata-rata :"<<rata;


    return 0;
}