#include <iostream>
void change(int *g){
    // g la dia chi.. tam = g la dia chi


    
    int *tam = g;
    //* tam= 9 thi *g = 9
    // hay s= 9;
    *tam = 9;
}
int main(){
    // int s = 1;
    // // h chua dia chi cua s 
    // // * h  la tro toi h  , hay tro toi dia chi cua s
    // int *h = &s;
    // // c = dia chi cua s 
    // // trro toi dia chi cua s 
    // int *c = h;
    // // pp la dia chi cua h
    // // *pp tro toi dia chi h, *pp la gia tri h = dia chi cua s
    // // **pp tro toi dia chi cua *pp hay tro toi dia chi s => **pp = s;
    // int ** pp = &h;
    // change(h);
    // std::cout << h <<" "<< *c <<" "<<s <<" "<< &s << " "<< c << " " << pp << " "<< *pp;
    int n = 4;
    // khoi tao  1 array vowis n phan tu *a la a[0] = 0
    int *a = new int[n];
    // khoi tao gia tri *b bang 5 hay b[0] = 5
    int *b = new int (5);
    std::cout << *a << " " << a[1] << " " << a[2] << " " << a[3];
    std::cout << std::endl << sizeof(*a) ;
    std::cout << std::endl << "truoc khi xuat:" << std::endl ;
    for (int i = 0; i <= n+2; i++){
        std::cin >> a[i];
    }
    std::cout << std::endl << "sau khi xuat:" << std::endl ;
    for (int i = 0; i <= n+2; i++){
        std::cout << a[i];
    }
    //size_t trả ra chiều dài của chuổi , sizeof tra ra chieu dai cua mang 
    std::cout << std::endl << size_t(*a) ;

    return 0;
}