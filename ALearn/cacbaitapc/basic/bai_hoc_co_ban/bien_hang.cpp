#include "stdio.h"
#include <conio.h>
#include "header.h"
void function1();



int c=0;// biến toàn cầu




void global(){
    for (c=0;c<4;c++)
    printf("\nc=%d",c);
}

signed int l;// bien lay co dau giia tri tu -2147483648 đến 2147483647
unsigned int l1;//bien ko lay dau am có miền giá trị từ 0 đến 4294967295
const int d=4;



void global2(){
    c=c+3;
    printf("\nc2=%d",c);
}

int e=1;
void display_x(){
    printf("\n X=%d",e);
}
int main() {
    function1();
    function1();
    function1();
    global();
    global2();
    global2();global2(); 
    printf("\n%d",d);
    
    display_x();
    getch();  
}
 static int k;// bien global static
void function1() {
    int x = 10; // bien local
    static int y = 10; // bien local static 
    x = x + 1;
    y = y + 1; 
    e++; 
    printf("\n %d, %d", x, y);
}
// – Biến static có thể là global hoặc local. Cả hai đều được khai báo với từ khóa static đi kèm.
// – Biến local static là biến có thể duy trì giá trị từ lần gọi hàm thứ nhất đến các lần gọi hàm tiếp theo. 
//Biến local static tồn tại đến khi chương trình kết thúc.
// – Khi tạo 1 biến local static trong hàm, chúng ta nên khởi tạo giá trị cho chúng. Nếu không giá trị biến được gán mặc định bằng 0.
// – Biến global static là biến global mà chỉ có thể truy cập từ file (.c/.cpp) mà biến đó được định nghĩa.
