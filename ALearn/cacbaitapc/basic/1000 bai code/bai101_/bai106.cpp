#include  <stdio.h>
#include <conio.h>
int main(){
    int n,ng,du,tram;
    do{
        printf("nhap so co 3 chu so :");
        scanf("%d",&n);

    }while(n<100||n>=1000);
    tram=n/100;
    ng=n/10;
    ng=ng%10;
    du=n%10;
    static char const * const  ten_so[10]={"\0","mot","hai","ba","bon","nam","sau","bay","tam","chin"};
   // char * ten_so[9]={"mot","hai","ba","bon","nam","sau","bay","tam","chin"};
    printf(ten_so[tram]);
    printf(" tram ");
    if(ng==0) printf("linh");
    else if(ng==1) printf(ten_so[0]);
    else printf(ten_so[ng]);
    printf(" muoi ");
    printf(ten_so[du]);
    getch();
}