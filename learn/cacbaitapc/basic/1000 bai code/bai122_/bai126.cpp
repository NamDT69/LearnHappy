#include <stdio.h>
#include <ncurses.h>
#include <stdlib.h>

void nhap (FILE *doc, int *a, int n){
    for (int i=0; i<n; i++)
        fscanf (doc, "%d", &a[i]);
}

int tong_gia_tri_am (int *a, int n){
    int s=0;
    for (int i=0; i<n; i++)
        if (a[i]<0) s+=a[i];
    return s;
}
int main(){
    FILE *doc;
    int b, *a, n=0;
    doc = fopen ("D:\\Hoc_tap\\cacbaitapc\\basic\\1000 bai code\\bai122_\\bai122_text.txt", "r");
        if (doc==NULL){
            printf ("fil bij loi");
            getch();
        }
        while (fscanf(doc, "%d", &b)>0) n++;

    a = (int*) malloc(n*sizeof(int));

    fseek (doc, 0, SEEK_SET);

    nhap (doc, a, n);
    printf ("tong cac gia tri am la :%d",  tong_gia_tri_am (a, n));
   
    
    fclose (doc);

    free(a);
    getch();
    return 0;
}