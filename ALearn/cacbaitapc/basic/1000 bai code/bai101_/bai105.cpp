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
    switch (ng)
    {
    case 1:
        printf("muoi ");
        break;
     case 2:
        printf("hai ");
        break;
     case 3:
        printf("ba ");
        break;
     case 4:
        printf("bon ");
        break;
     case 5:
        printf("nam ");
        break;
     case 6:
        printf("sau ");
        break;
     case 7:
        printf("bay ");
        break;
    case 8:
        printf("tam ");
        break;
    case 9:
        printf("chin ");
        break;
    }


//---------------------------------------------------------------------

    switch (du)
    {
    case 1:
        printf("mot");
        break;
     case 2:
        printf("hai");
        break;
     case 3:
        printf("ba");
        break;
     case 4:
        printf("bon");
        break;
     case 5:
        printf("nam");
        break;
     case 6:
        printf("sau");
        break;
     case 7:
        printf("bay");
        break;
    case 8:
        printf("tam");
        break;
    case 9:
        printf("chin");
        break;
    }

    getch();
}