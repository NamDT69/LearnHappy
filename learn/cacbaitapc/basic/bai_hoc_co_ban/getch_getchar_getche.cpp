 
 
 #include <stdio.h>

  #include<stdlib.h>

  #include<conio.h>

int main(){

    char ch1, ch2, ch3;

    printf("Thu nghiem voi getchar ");

    ch1=getchar();

    putchar(ch1);

    printf("\n Thu nghiem voi getche\n ");

    ch2=getche();

    putchar(ch2);

    printf("\n Thu nghiem voi getch\n ");

    ch3=getch();

    putchar(ch3);

    system("pause");

    return 0;

}