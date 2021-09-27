#include <iostream>
#include <fstream>

#include <stdio.h>
#include <stdlib.h>

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




// void merge( int *a,int left,int mid, int right){
// 	int i = left, j=mid+1;
// 	int n=0;
// 	int k = right-left+1;
// 	int *b = new int [k];

// 	while ( i<=mid && j<= right ){
// 		if (a[i]<a[j]){
// 			b[n]= a[i];
// 			i++; n++;
// 		}else {
// 			b[n]=a[j];
// 			n++; j++;
// 		}
// 	}
// 	while ( i<=mid ){
// 		b[n]=a[i];
// 		n++; i++;
// 	}
// 	while ( j<=right){
// 		b[n]=a[j];
// 		n++; j++;
// 	}
// 	j=0;
// 	for ( i=left ;i <right+1 ;i++){
// 		a[i] = b[j];
// 		j++;
// 	}

// 	delete []b;
// }

// void merge(int *a, int l, int m, int r){
// 	int i , j, k;
// 	int n1= m -l +1;
// 	int n2= r-m;
// 	int *b = (int *) malloc ( n1*sizeof(int) );
// 	int *c = (int *) malloc ( n2*sizeof(int) );
// 	for ( i=0; i<n1; i++){
// 		b[i]=a[l+i];
// 	}
	
// 	for ( j=0; j<n2; j++){
// 		c[j] = a[m+1+j];
// 	}
// 	i=0;
// 	j=0;
// 	k=l;
// 	if (i<n1 && j<n2 ){
// 		if( b[i]< c[j]){
// 			a[k]=b[i];
// 			i++;
// 		}else{
// 			a[k]=c[j];
// 			j++;
// 		}
// 		k++;
// 	}
// 	while (i<n1){
// 		a[k]=b[i];
// 		i++;
// 		k++;
// 	}
// 	while (j<n2){
// 		a[k]=c[j];
// 		k++;
// 		j++;
// 	}
// 	free (b);
// 	free (c);
// }
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
    /* create temp arrays */
    int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
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
	
	
	doc.open ("mang.txt");
	
	if (doc.fail()){
		cout << "loi file";
		system ("pause");
		return 1;
	}
	
	
	
	while (doc >> i) n++;
	doc.close();

	a = new int [n];
	
	
	doc.open ("mang.txt");
	
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

