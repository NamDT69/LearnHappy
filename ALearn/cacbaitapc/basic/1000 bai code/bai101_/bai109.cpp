#include  <stdio.h>
#include <conio.h>

int main(){
     printf("---------------------bang cua chuong----------------- ");
    for(int i=1;i<=9;i++){
        printf("\n\n");
        for(int j=1;j<=9;j++) 
            printf("%d X %d = %d\n",i,j,i*j);
        

    }
    getch();
}