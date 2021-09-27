#include <iostream>
#include <fstream>

using namespace std;
void nhap (fstream &doc, int *a, int n){
	for ( int i=0; i<n; i++){
		doc >> a[i];
	}
}




void xuat (int *a, int n){
	for ( int i=0; i<n; i++){
		cout << a[i] << "\t";
	}
}




void merge( int *a,int left,int mid, int right){
	int i = left, j=mid+1;
	int n=0;
	int k = right-left+1;
	int *b = new int [k];

	while ( i<=mid && j<= right ){
		if (a[i]<a[j]){
			b[n]= a[i];
			i++; n++;
		}else {
			b[n]=a[j];
			n++; j++;
		}
	}
	while ( i<=mid ){
		b[n]=a[i];
		n++; i++;
	}
	while ( j<=right){
		b[n]=a[j];
		n++; j++;
	}
	j=0;
	for ( i=left ;i <right+1 ;i++){
		a[i] = b[j];
		j++;
	}

	delete []b;
}



void mergesort(int *a, int left, int right){
	if ( left < right){
		int mid =left +  (right - left)/2;
		mergesort (a,left,mid);
		mergesort (a,mid+1,right);
		merge (a,left, mid, right);
	}	
}



int main(){
	int *a, n=0, i;
	fstream doc;
	
	
	doc.open ("O:\\hoc\\mang.txt");
	
	if (doc.fail()){
		cout << "loi file";
		system ("pause");
		return 1;
	}
	
	
	
	while (doc >> i) n++;
	doc.close();

	a = new int [n];
	
	
	doc.open ("O:\\hoc\\mang.txt");
	
	nhap (doc,a,n);
	xuat (a,n);
	
	doc.close();
	
	mergesort ( a, 0, n-1);
	cout << " \n sau khi sap xep \n";
	
	xuat (a,n);
	
	
	delete []a;
	system ("pause");
	
	return 0;
}

