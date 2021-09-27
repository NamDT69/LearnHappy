// Viết một chương trình mẹ với một lớp con kế thừa. 
//Cả hai đều phải có method void display () để print một message (message của mẹ và con khác nhau).
//  Trong phần chính, định nghĩa lớp con và gọi method display() dựa trên lớp con.
#include <iostream>

class Mother{
    public:
    void display(){
        std::cout << "Good morning";
    }
};
class Childend : public Mother{

};
int main(){
    Childend nam ;
    nam.display();
    return 0;
} 