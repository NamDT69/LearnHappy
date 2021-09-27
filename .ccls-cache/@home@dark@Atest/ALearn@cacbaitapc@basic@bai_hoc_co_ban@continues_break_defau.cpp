#include <stdio.h>
#include <conio.h>
void continues(){
    for (int i=0;i<=20;i++){
        if (i==7||i==8)
        continue;// quay veef vong lap bo qua phia sau
        if (i==15)
        break;// ket thuc vonglap
        printf("%d\n",i);
    }
}

void dafaul(){  
    int x;
    printf ("\n nhap gia tri x: ");
    scanf("%d",&x);
    //fflush(stdin);
    switch(x){
        case 1:
            printf("cais nay la chon bo may");
            break;
        case 2:
            printf("ai la cua ai 2");
            break;
        case 3:
            printf (" ngu vanla ngu 3");
    }
}
int main(){
    continues();
    dafaul();
    getch();
}
