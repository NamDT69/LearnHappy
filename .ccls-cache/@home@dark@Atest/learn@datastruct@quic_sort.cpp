#include <iostream>
#include <fstream>
using namespace std;
void nhap(int *a, int n, ifstream &doc){
    for (int i = 0; i < n; ++i)
        doc >> a[i];
}
void xuat(int *a, int n){
    for (int i = 0; i < n; ++i){
        cout << a[i] << "\t";
    }
}
void swap(int *a, int *b){
    *a = *a - *b;
    *b = *a + *b;
    *a = *b - *a;
}
int vachngan(int *a, int left, int right){
    int i = left+1;
    int j = right;
    int temp = a[left];
    // i++;
    do{
        while (i <= j && a[i] <= temp){
            i++;
            // if (i>j){
            //        i--;
            //     }
        }
        while (a[j] > temp && i <= j){
            j--;
        }
        if (i<j){
            swap( &a[i], &a[j]);
            i++;      
            j--;
        }
    }while ( i<=j);

    if (a[left] != a[j]) swap ( &a[left], &a[j]);

    return j;
}
void quick_sort(int *a, int left, int right){
    if ( left < right){
        int i = vachngan (a, left, right);
        quick_sort (a, left, i-1);
        quick_sort (a, i+1, right);
    }
}
int main(){
    int b, n=0, *a;
    ifstream doc;
    doc.open( "Hoc_tap//cacbaitapc//basic//1000 bai code//sort_//mang.txt");
    if ( doc.fail() ){
        cout << "filer bij loi";
        return 2;
    }
    while (doc >> b) n++;
    doc.close();
    a = new int [n];
    doc.open ("Hoc_tap/cacbaitapc/basic/1000 bai code/sort_/mang.txt");
   
    nhap(a, n, doc);
    xuat(a, n);
    doc.close();

    quick_sort(a, 0, n-1);
    
    cout << " sau khi sap xep : \n";
    xuat(a, n);
    cout << endl;
    delete []a;
    return 0;
}