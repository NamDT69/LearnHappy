// a. Tạo một lớp Vehicle với các thuộc tính max_speed và bản sao tổng số. 
// b. Tạo một lớp Vehicle không có biến và phương thức nào cả. 
// c. Tạo một lớp con Bus kế thừa mọi biến và phương thức của lớp cha Vehicle.
// d. Hãy đưa ra đối số sức chứa của Bus.seating_capacity() một giá trị mặc định là 50. 
// e. Xác định mỗi đối tượng của Bus thuộc lớp nào.
// f. Xác định nếu School_bus cũng là một bản sao của lớp Vehicle// đúng vậy
#include <iostream>

class Vehicle{
public:
    int max_speed;
    int capacity;
    int tong;
    int seating_capacity(int capacityy = 50){
            this->capacity = capacityy;
            return this->capacity;
        }
};

class Bus : public Vehicle{
};

int main(){
    Bus b;
    std::cout << b.seating_capacity();
    return 0;
}
// cau e
// class Vehicle:
//     def __init__(self, name, mileage, capacity):
//         self.name = name
//         self.mileage = mileage
//         self.capacity = capacity
 
// class Bus(Vehicle):
//     pass
 
// School_bus = Bus("School Volvo", 12, 50)
// # school-bus thuộc class bus
 
// # use Python's built-in type() function
// print(type(School_bus))

// cau f
// class Vehicle:
//     def __init__(self, name, mileage, capacity):
//         self.name = name
//         self.mileage = mileage
//         self.capacity = capacity
 
// class Bus(Vehicle):
//     pass
 
// School_bus = Bus("School Volvo", 12, 50)
 
// # use Python's built-in isinstance() function
// # đây là một bản sao của instance
// print(isinstance(School_bus, Vehicle))

