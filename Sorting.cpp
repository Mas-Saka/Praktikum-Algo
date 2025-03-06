    #include <iostream>
    using namespace std;

    void quicksort(string array[], int low, int high){
        int awal = low, akhir = high;
        string pivot = array[(awal+akhir)/2];
        do{
            while (array[awal]<pivot){
                awal++;
            }
            while (array[akhir]>pivot){
                akhir--;
            }
            if(awal<=akhir){
                swap(array[awal],array[akhir]);
                awal++;
                akhir--;
            }
        } while (awal<=akhir);
        if(low<akhir){
            quicksort(array,low,akhir);
        } if(awal<high){
            quicksort(array,awal,high);
        }
    }

    int main() {
        // QUICK SORT
        string nama[5];
        cout << "masukkan 5 nama :"; 
        for (int z=0; z<5; z++)
        {cin >> nama[z];}
        
        int n = sizeof(nama)/sizeof(nama[0]);
        
        cout<<"Sebelum diurutkan"<<endl;
        for(int k=0; k<n; k++){
            cout<<nama[k]<<" ";
        } cout<<endl;

        quicksort(nama,0,n-1);
        cout<<"setelah diurutkan dengan quick sort"<<endl;
        for(int d=0; d<n; d++){
            cout<<nama[d]<<" ";
        } cout<<endl;
        
        
        //BUBBLE SORT

        cout << "Sebelum diurutkan \n";
        for(int k=0;k<n;k++){
            cout << nama[k] << " ";
        }
        cout << endl;
        for(int i=0; i<n-1; i++){
            for(int j=0; j<n-i-1; j++){
                if(nama[j]< nama[j+1]){
                    swap(nama[j], nama[j+1]);
                }
            }
        }
    cout << "Setelah diurutkan secara BUBBLE SORT: \n";
    for(int k=0; k<n; k++){
        cout << nama[k]<<" ";
    }
        return 0;
    }