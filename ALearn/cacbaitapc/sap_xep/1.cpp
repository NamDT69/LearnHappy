#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void nhapmang( FILE *doc, int *a, int n){
	for ( int i=0; i < n; i++){
		fscanf ( doc, "%d", &a[i]);
	}
}
void xuatmang ( int *a, int n){
	for ( int i=0; i<n; i++){
		printf ( " %d \t", a[i]);
	}
}
void mergesort ( int *a , int left, int right){
	if ( left < right){
		int mid =left +  (right - left)/2;
		mergesort (a,left,mid);
		mergesort (a,mid+1,right);
	}
		
} 
int main(){
	int *a, n=0, b;
	FILE *doc;
	doc = fopen ("O:\\hoc\\mang.txt", "r");
	
	if ( doc == NULL){
		printf ( "file bij loi");
		exit (1);
		getch();
	}
	while ( fscanf(doc,"%d",&b) > 0 ) n++;
	a = (int *) malloc (n*sizeof(int));
	
	fseek(doc,0,SEEK_SET);
	nhapmang( doc , a,  n);
	xuatmang (a, n);
	
	fclose(doc);
	
	
	getch();
}
