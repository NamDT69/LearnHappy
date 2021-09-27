#include <stdio.h>
#include <conio.h>
typedef int a;
typedef int *point;
typedef int **poin;
int main(){
a b;
b=100;
printf("so b =%d\n",b);
point s;
s=&b;
poin n=&s;
printf ("con tro s= %d\n",*s);
printf("con tro cua con tro = %d",**n);
getch();
}