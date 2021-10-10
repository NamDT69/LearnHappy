#include <stdio.h>
#include <conio.h>
int main(){
    int h;
    do{
        printf("nhap h:");
        scanf("%d",&h);
    }while(h<=0);
    // cau a
    for(int i=1;i<=h;++i){

        for(int j=h-1;j>=1;--j){
            if(j>=i) printf("   ");
            else printf(" * ");
            
        }
        for(int j=1;j<=i;++j){
            printf(" * ");
        }
        printf("\n");
    }
    // cau b
    printf("\n");


    for(int i=1;i<=h;++i){

        for(int j=h-1;j>=1;--j){
            if (i==h)  printf(" * ");
            else  if(j>=i||j<=i-2) printf("   ");
            else printf(" * ");
            
        }
        for(int j=1;j<=i;++j){
            if(i==h)  printf(" * ");
            else if(j==i) printf(" * ");
            else printf("   ");
        }
        printf("\n");
    }


    // cau c
    printf("\n");


    for(int i=1;i<=h;++i){

        for(int j=1;j<=i;++j)
            printf(" * ");
        printf("\n");
    }

    //cau d
     printf("\n");


    
    for(int i=1;i<=h;++i){

        for(int j=1;j<=i;++j){
           if(j==i||j==1||i==h  ) printf(" * ");
           else printf("   ");
        }
        printf("\n");
    }

    getch();
}