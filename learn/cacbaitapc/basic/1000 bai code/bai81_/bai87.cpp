#include <stdio.h>
#include <conio.h>
int main(){
    int i=0,s=0;
    while(s<=10000){
        i++;
        s+=i;
    }
    printf("gia tri cua n la :%d",i);
    getch();
}