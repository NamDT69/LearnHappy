#include <stdio.h>
#include <conio.h>
int main(){
    int n,m;
    do{
        printf("nhap n,m:");   
        scanf("%d%d",&m,&n);
    }while(n<=0||m<=0);

    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j)
            printf("    *    ");
        printf("\n\n");
    }  

    printf("\n\n"); 

    
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
            if(i==1||i==n||j==1||j==m)
                printf("   *   ");
            else printf("       ");
        }
        printf("\n\n");
    }  
    getch();
}