#include <stdio.h>
#include <conio.h>

union hethong1{
    int ram;//4 byte
    float ssd;//8byte
    short hdd;//2byte
};//8 byte tat ca

//union su dung vung nho lai // do ton vung nho tiet kiem dung luong cho lap trinh nhung
struct hethong2{
    int ram;//4 byte
    float ssd;//8byte
    long hdd;//4 byte
};//16 byte

int main(){
    hethong1 a;
    hethong2 b;

    a.ram=20;
    printf ("vung nho ram=%d\n",a.ram);
    a.ssd=10000;
    printf ("vug nho ssd=%f\n",a.ssd);
    b.ram=3000;
    b.hdd=20000;

    // printf ("vung nho ram=%d,vug nho ssd=%f\n",a.ram,a.ssd);
    // de nhu nay se bi loi so rat lon vi su dung qua vung nho

    printf ("vung nho ram=%d,vug nho hdd=%g\n",b.ram,b.hdd);
    getch();
}