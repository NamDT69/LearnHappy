#include <stdio.h>
#include <conio.h>


enum day { monday=1,tuesday=2,wednesday=3,thusday=4,friday=5,sattuday=6,sunday=7};
//day la bien mac dinh giong nhuw hang so
//gans moi phan tu cho mot so

int main(){
    enum day n;
    n=tuesday;
    printf("%tat cac cac thu:%d",n);
    printf("\n%d,%d,%d,%d,%d",monday,tuesday,wednesday,thusday,friday);
    getch();
}