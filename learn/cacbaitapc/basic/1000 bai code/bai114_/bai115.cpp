#include <stdio.h>
#include <conio.h>

void nhap(char ten[],double *toan,double *van){
    FILE *tro;
    tro=fopen("D:\\Hoc_tap\\cacbaitapc\\basic\\1000 bai code\\bai114_\\bai115_text.text","r");
    printf("nhap ten hoc sinh:");
  fgets(ten,size_t(ten),tro);
  // scanf("%s",&ten);
 // gets(ten);
  
    printf("nhap diem toan va dien van:");
    fscanf(tro,"%lf%lf",&*toan,&*van);
     fclose(tro);
    
}
void xuat(char ten[],double *toan ,double *van){
 //   printf("\n hoc sinh :%s",ten);
  puts(ten);
    printf("\ndiem trung binh = %lf",(*toan+*van)/2);
}
int main(){
    char ten[30];
    double toan,van;
    nhap(ten,&toan,&van);
    xuat(ten,&toan,&van);
    getch();
}