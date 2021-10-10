#include <iostream>
#include <fstream>
// sap xep noi bot _so sanh 2 so ben canh nhau lien tiep_ quay lai n lan cho den khi ket thuc// de dua so to nhat ve cuoi cung
using namespace std;

void nhap (fstream &a, int *arr, int n){
    for (int i=0; i<n; ++i)
        a >> arr[i];
}

void xuat (int *arr, int n){
    for (int i=0; i<n; ++i)
        cout << arr[i] << "\t";  
}

void swap (int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void sapxep_noibot (int *arr, int n){
    int i, j;
    bool kiemtra;
    for (i=0; i<n-1; ++i){
	
       kiemtra;
        for (j=0; j<n-i-1; ++j){
            if (arr[j]>arr[j+1]){
                swap (&arr[j], &arr[j+1]);
                kiemtra=true;
            }
            if (!kiemtra)// neu ko co cai nao hoan doi thi dung lai luon vi no da sap xep roi. giup nhanh hon ;
            break;      
    	}
	}
}
int main(){
    fstream a; 
    a.open ("D:\\Hoc_tap\\cacbaitapc\\basic\\1000 bai code\\bai122_\\bai122_text.txt", ios::in);

    int *arr, n=0, b;

    if (a.fail()){
        cout << "file bi loi";
        system ("pause");
        return 2;
    }

    while ( a>>b ) n++;
    arr = new int (n);
    a.close();
    a.open ("D:\\Hoc_tap\\cacbaitapc\\basic\\1000 bai code\\bai122_\\bai122_text.txt", ios::in);
    a.seekg (0);

    nhap (a, arr, n);
    xuat (arr, n);

    cout << "\nsau khi sap xeo \n";
    a.close();
    sapxep_noibot (arr, n);
     xuat (arr, n);

    
    delete []arr;

    system ("pause");
    return 0;
}
