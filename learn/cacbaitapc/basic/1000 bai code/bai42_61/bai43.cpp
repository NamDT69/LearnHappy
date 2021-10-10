//Bài 43: Hãy đếm số lượng chữ số của số nguyên dương n
#include <conio.h>
#include <stdio.h>

int dem(unsigned int n){
     if(n==0)
    return 1;
    int i=0;
    while(n>=1){
        n/=10;
        i++;
    }
    return i;
}
int main(){
     unsigned int n;
    do{
    printf("enter a positive integer:");
    scanf("%u",&n);
    }while(n<0);
    printf("so luong chu so la : %d",dem(n));

    getch();
}