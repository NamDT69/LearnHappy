#include <stdio.h>
#include <conio.h>

int main(){
    int s=0;
    for(int i=0;i<=200;++i)
        for(int j=0;j<=100;++j)
            for(int k=0;k<=40;++k){
                if(i*1000+j*2000+k*5000==200000){
                    printf("%d to 1000 , %d to 2000,%d to 5000\n",i,j,k);
                    s++;
                }
            }
    printf("co %d cach chon",s);
    getch();
}