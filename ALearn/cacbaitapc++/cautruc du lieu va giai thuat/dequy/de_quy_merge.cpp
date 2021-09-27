#include <conio.h>
#include <stdio.h>
#include <stdlib.h>



int main(){
    FILE *doc=fopen ("mang.txt","r");
    int *a, n=0, b;
    if (doc==NULL){
        printf ("file bij loi");
        getch();
        exit(1);
    }
    while ( fscanf(doc, "%d", &b)>0 ) n++;
    a = (int *) calloc (n, sizeof(int));

    

    getch();
}