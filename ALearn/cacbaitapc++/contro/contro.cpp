#include <iostream>
void change(int *g){
    // g la dia chi.. tam = g la dia chi


    
    int *tam = g;
    //* tam= 9 thi *g = 9
    // hay s= 9;
    *tam = 9;
}
int main(){
    int s = 1;
    // h chua dia chi cua s 
    // * h  la tro toi h  , hay tro toi dia chi cua s
    int *h = &s;
    // c = dia chi cua s 
    // trro toi dia chi cua s 
    int *c = h;
    // pp la dia chi cua h
    // *pp tro toi dia chi h, *pp la gia tri h = dia chi cua s
    // **pp tro toi dia chi cua *pp hay tro toi dia chi s => **pp = s;
    int ** pp = &h;
    change(h);
    std::cout << h <<" "<< *c <<" "<<s <<" "<< &s << " "<< c << " " << pp << " "<< *pp;
    return 0;
}