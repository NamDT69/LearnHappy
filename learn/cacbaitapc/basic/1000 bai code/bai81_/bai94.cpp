#include <stdio.h>
#include <conio.h>
int main(){
    for(int i=1;i<100;i+=2){
        if(i==5||i==7||i==93) continue;
        printf("%d\t",i);
    }
    getch();
}