#include <iostream>
#include <fstream>

using namespace std;
void nhap(fstream &ptr,int *a,int n){   
    for(int i=0;i<n;i++){
        ptr>>a[i];
    }
}


void xuat(int *a,int n){
     for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
}



int gia_tri_nho_nhat(int *a,int n){
    int min=a[0];
    for(int i=1;i<n;i++)
        if(min>a[i])
            min=a[i];
    
    return min;
}

void vi_tri_gia_tri_nho_nhat(int *a,int n){
    int min=gia_tri_nho_nhat(a,n);
    for(int i=1;i<n;i++)
        if(min==a[i])
           cout<<i<<"\t"; 
        
}
int main(){
    int *a,b;
    int n=0;
    fstream ptr;


    ptr.open("D:\\Hoc_tap\\cacbaitapc\\basic\\1000 bai code\\bai122_\\bai122_text.txt",ios::in);
    if(ptr.fail()){
        cout<"file bi loi ";
        system("pause");
        return 1;
    }
    

    while(ptr>>b)
        n++;

   ptr.close();


    a=new int[n];



    ptr.open("D:\\Hoc_tap\\cacbaitapc\\basic\\1000 bai code\\bai122_\\bai122_text.txt",ios::in);
    //ptr.seekg(0,ios::beg);//beg :bat dau
   //cur ::hien tai
   //end: phia cuooi
    nhap(ptr,a,n);
    ptr.close();



    xuat(a,n);
    cout<<"\n vi tri co gia tri nho nhat la :";
    vi_tri_gia_tri_nho_nhat(a,n);
    delete []a;
    system("pause");
    return 0;
}