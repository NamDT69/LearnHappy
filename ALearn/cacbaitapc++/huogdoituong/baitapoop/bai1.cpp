// Bài 1: Viết một chương trình định nghĩa một lớp hình có constructor đưa ra giá trị của chiều rộng và chiều dài.
//  Sau đó, định nghĩa hai lớp con hình tam giác và hình chữ nhật. Hai lớp con này tính diện tích của hình. 
// Trong lớp chính, định nghĩa hai biến hình tam giác và hình chữ nhật. Sau đó gọi hàm area() trong hai biến này. 
#include <iostream>
class hinh{
private:
    double canh1;
    double canh2;
public:
    hinh(double r = 0, double d = 0){
        (*this).canh1 = d;
        this->canh2 = r;
        std::cout << this << std::endl;
    }
    double area(){
        std::cout << this << std::endl;
        return canh1 * canh2;
    }
};
class HinhChuNhat: public hinh{
    public:
    HinhChuNhat(double r = 0, double d = 0):hinh(r,d){}
    
    // double area(){
    //     return this->r * this->d;
    // }
};
class HinhTamGiac:public hinh{
    public: 
    // double area;
    //tham chieu tơi hinh nghia la van dung dia chi cua tam giacs
    HinhTamGiac(double chieucao, double canhDoi):hinh(chieucao,canhDoi){
        //  area = hinh::area() * 1/2;
        std::cout << this << std::endl;
    }
    double area(){
        // 1 / 2 bằng 0 , hinh::area là lấy địa chỉ hình ở tam giác khi đã được truyền vào
        //dung dia chi tam giac tham chieu tơsi hinh
        return hinh::area() * 1/2;
    }
};
int main(){
    // hinh s = hinh(3,4);
    // std::cout << "\ndia chi cua s:" << &s << std::endl;
    // HinhChuNhat b = HinhChuNhat(4,6);
    // std::cout << (&b)->area();
    HinhTamGiac *a = new HinhTamGiac(3,4);
    std::cout << a->area();

    return 0;
}