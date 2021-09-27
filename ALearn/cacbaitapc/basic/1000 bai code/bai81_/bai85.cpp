#include <conio.h>
#include <stdio.h>
int main(){
    unsigned int a;
    do{
    printf ("nhap thang:");
    scanf("%d",&a);
    }while(a==0||a>12);
    switch (a)
    {
    case 1:
    case 2:
    case 3:
        printf("quy 1");
        break;
    case 4:
    case 5:
    case 6:
        printf("quy 2");
        break;
    case 7:
    case 8:
    case 9:
        printf("quy 3");
        break;
    case 10:
    case 11:
    case 12:
        printf("quy 4");
        break;                
    }
    getch();
}