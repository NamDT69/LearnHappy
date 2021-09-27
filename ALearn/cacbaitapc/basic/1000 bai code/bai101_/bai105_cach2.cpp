#include  <stdio.h>
#include <conio.h>
int main(){
    int n,ng,du;
    do{
        printf("nhap so co 2 chu so :");
        scanf("%d",&n);

    }while(n<10||n>=100);
    ng=n/10;
    du=n%10;
    static char const * const  ten_so[10]={"\0","mot","hai","ba","bon","nam","sau","bay","tam","chin"};
   // char * ten_so[9]={"mot","hai","ba","bon","nam","sau","bay","tam","chin"};
    if(ng==1) ng=0;
    printf(ten_so[ng]);
    printf(" muoi ");
    printf(ten_so[du]);
    getch();
}