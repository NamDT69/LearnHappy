//Cho n là số nguyên dương. Hãy tìm giá trị nguyên dương k lớn nhất sao
//cho S(k) < n. Trong đó chuỗi S(k) được định nghĩa như sau : S(k) = 1 +
//2 + 3 + … + k
#include <conio.h>
#include <stdio.h>

int main(){
    unsigned int n;
    printf("enter a positive integer:");
    scanf("%u",&n);
    int s=1;
    for(int i=2;i<=n/2;i++){
        s+=i;
       if(s>=n){
           s-=i;
           break;
       } 
    }
    printf("s(k)=%d",s);
    getch();
}