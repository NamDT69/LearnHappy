#include <iostream>
#include <fstream>
using namespace std;


void nhap (int *a, int n){
    ifstream doc;
    doc.open ( "D:\\Hoc_tap\\cacbaitapc\\basic\\1000 bai code\\bai122_\\bai122_text.txt", ios::in );
    for (int i=0; i<n; i++)
        doc >> a[i];
    doc.close();
}

int kiem_tra_so_nguyen_to (int n){
    int k=0;
    for (int i=1; i<=n/2; i++)
        if (n%i==0) k++;
    return k;
}

void so_nguyen_to_nho_hon_100 (int *a, int n){
    for (int i=0; i<n; ++i)
        if (a[i]<100 && kiem_tra_so_nguyen_to(a[i])==1)
            cout << a[i] << "\t";
        
    
}
int main(){
    ifstream doc;
    int b,*a,n=0;
    doc.open ( "D:\\Hoc_tap\\cacbaitapc\\basic\\1000 bai code\\bai122_\\bai122_text.txt", ios::in );

    if (doc.fail()){
        cout << "file bi loi!";
        system ("pause");
        return 1;
    }
    while ( doc>>b ) n++;

    a = new int (n);
    doc.close();
    nhap (a, n);
    so_nguyen_to_nho_hon_100 (a, n);

    delete []a;

    system ("pause");
    return 0;
}