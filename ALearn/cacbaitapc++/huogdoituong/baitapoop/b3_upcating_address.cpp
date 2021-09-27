// Viết một chương trình với lớp mẹ animal. Trong chương trình này, định nghĩa các biến tên, tuổi và hàm set_value().
//  Sau đó tạo hai biến cơ bản Zebra và Dolphin để viết message thông báo tên tuổi và những thông tin khác (như nguồn gốc).
#include <iostream>
#include <string>
#include <sstream>

class Animal{
private:
    std::string name;
    int old;
public:
    Animal(std::string ten, int tuoi):name(ten), old(tuoi){
        std::cout << "Animal: " << this << std::endl;
    }
    virtual void display (){
        std::cout << "disAimal: " << this << std::endl;
        std::cout << "name  :" << this->name << std::endl;
        std::cout << "old :" << this->old << std::endl;
    }
};
class Zebra:public Animal{
private:
    std::string origin;
public:
    // Zebra(int tuoi, std::string nguonGoc):Animal("Zebra", tuoi), origin(nguonGoc){}
    Zebra(std::string ten = "Zebra", int tuoi = 0, std::string nguonGoc = ""):Animal(ten, tuoi), origin(nguonGoc){
        std::cout << "Zebra: " << this << std::endl;
		std::cout << "hay qua" << std::endl;
	}

    virtual void display(){
        std::cout << "disZebra: " << this << std::endl;
        Animal::display();
        std::cout << "origin : " << origin  << std::endl;
    }
};
// lap tuc goi toi zebra
class Dolphin:public Zebra{
public:
    Dolphin( int tuoi, std::string nguongoc, std::string ten = "Dolphin"):Zebra(ten, tuoi, nguongoc){
        std::cout << "dophin: " << this << std::endl;
    }

};

int main(){
    // Dolphin a;
    // Dolphin a = Dolphin(12, "ChauPhi");a.display();
    //Dolphin **b = new Dolphin[1];
    // {
    //     new Dolphin(12, "chau dai duong ", "ca heo sat thu"),
    //     new Dolphin(14,"chau bac cuc", "ca heo trang "),
    //     new Dolphin(153634, "chau nam cuc", "ca heo co dai")
    // };



    Animal *b[3] = 
    {
        new Dolphin(12, "chau dai duong ", "ca heo sat thu"),
        new Dolphin(14,"chau bac cuc", "ca heo trang "),
        new Dolphin(153634, "chau nam cuc", "ca heo co dai")
    };
    b[1]->display();
    
    
    Dolphin *a[3] = 
    {
        new Dolphin(12, "chau dai duong ", "ca heo sat thu"),
        new Dolphin(14,"chau bac cuc", "ca heo trang "),
        new Dolphin(153634, "chau nam cuc", "ca heo co dai")
    };
    Animal *c[] = 
    {
        new Animal("ca heo sat thu",12),
        new Animal("ca heo trang ",14),
        new Animal( "ca heo co dai", 124124)
    };
    c[0] ->display();

    Zebra *d = a[0];
    //tính đa hình 
     d->display();
    
    delete d;
    return 0;
}
