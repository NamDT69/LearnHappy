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
int min(int a, int b){
	return (a<b)?a:b;
}
void merge(int *a, int l, int m, int r){
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m ;
	// int *b = (int *) malloc ( n1*sizeof(int) );
	// int *c = (int *) malloc ( n2*sizeof(int) );
	int b[n1] ,c[n2];
	for ( i=0; i < n1; i++)
		b[i] = a[l + i];
	for ( j=0; j < n2; j++)
		c[j] = a[m + 1 + j];

	 i=0; j=0; k=l;
	while (i < n1 && j < n2 ){
		if( b[i] < c[j]){
			a[k] = b[i];
			i++;
		}else{
			a[k] = c[j];
			j++;
		}
		k++;
	}
	while (i<n1){
		a[k] = b[i];
		i++;
		k++;
	}
	while (j<n2){
		a[k] = c[j];
		j++;
		k++;
	}
	
}
void mergesort_lap_lai ( int *a ,int n){
	int cur_size, left_star;

	for ( cur_size=1; cur_size <= n-1; cur_size=cur_size*2 ){// tăng lên gấp đôi vị trí ở cur_size =1 mỗi lần lặp vd ( 0,1) (2,3), (4,5) -->
//	sau đó cur_size tăng lên gộp (0,1),(2,3)==>(0,3)
		for ( left_star=0; left_star < n-1; left_star+=2*cur_size ){//
			int mid= min (left_star + cur_size -1 , n-1);
			int right_end= min (left_star +cur_size*2 -1, n-1);
			merge(a, left_star, mid, right_end);
		}
	}
}

int main(){
	int *a, n=0, b;
	FILE *doc;
	doc = fopen ("mang.txt", "r");
	
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
	
	
	mergesort_lap_lai(a,n);
	printf( "\nsau khi sap xep \n");
	xuatmang (a, n);
		fclose(doc);
	getch();
}
