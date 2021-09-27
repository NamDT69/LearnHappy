#include <iostream>
#include "tim_so_max_min.h"
#include "phanso.h"
// bài này đã lỗi vì operator nếu xài trả về địa chỉ sẽ thay đỗi cú pháp khi xuất ra ,
//  từ đó bên template ko đúng form sẽ ko thực hiện hoặc trả kết quả sai hoặc đúng s
int main(){
    Fraction *a = new Fraction(3,4);
    Fraction c(4,3);
    Fraction b ;
    // b.operator=(c);
    std::cin >> b;
    std::cout << b;
//    Fraction c[4] = {
//         Fraction(3,4),
//         Fraction(32,4),
//         Fraction(3,6),
//         Fraction(3,46)
//    };
//    int n = sizeof(c) / sizeof(c[0]);
//    sort(c, 4);
//    for (int i = 0; i < 4; i++){
//        std:: cout << c[i] << "    ";
//    }
    return 0;
}