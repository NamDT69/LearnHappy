#include <stdio.h>
#include <conio.h>
int main(){
    for(int i=1;i<=4;i++){
        for(int j=4;j>=1;j--){

            if(j>=i)
            printf("   ");
            else printf(" * ");
        }
        for(int j=1;j<=i;j++){
            printf(" * ");
        }
       
        printf("\n");
    }
    printf("----------------------------------------------------------------\n");
 int h=4;
    for(int i=1;i<=4;i++){
      if(i==4)  h=3;
        for(int j=4;j>=2;j--){     
          if(i==4) {
              
              printf(" * ");
          }
          else if(j==i) printf(" * ");
         else printf("   ");
        
        }
        //if(i==4) h=3;
        for(int j=1;j<=i;j++){
               if(i==4) printf(" * ");
              else if(j==i)
                printf(" * ");
            else printf("   ");
        }
        printf("\n");
    }
       printf("--------------------------------------------------------\n");
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            printf(" * ");
        }
       
        printf("\n");
    }
     printf("--------------------------------------------------------\n");
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            if(j==1||j==i||i==4)
            printf(" * ");
            else printf("   ");
        }
       
        printf("\n");
    }
    
    getch();
}