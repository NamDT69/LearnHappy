#include <iostream>
#include <string>
#include <sstream>

int main(){

    //dùng để ghi , viết chuỗi giống như ghi chép file
    std::stringstream ss;
    int s;
    //  ghi dưx liệu vào 
    ss << "983 9879 7867";
    // đọc dữ liệu 
    ss >>s;
     std :: cout << s;
     ss >>s;
     std :: cout << s;
    return 0;
}