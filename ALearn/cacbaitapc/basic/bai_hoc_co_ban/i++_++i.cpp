#include <stdio.h>
#include <conio.h>

int main(){
    int  i,x;
    i=1;
    x=1;
    int j=i++;//gan i =1  cho j roi ms cong
    int h=++x;// tawng x len trc xong ms gan cho h
    for (int k=0;k<=5;k++)
    printf("%d  _",k);
  //  printf("%d,%d",j,h);
    getch();
}