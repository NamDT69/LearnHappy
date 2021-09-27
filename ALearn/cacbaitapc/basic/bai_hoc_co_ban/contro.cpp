#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int a = 2;
    int *p = &a;
    
    int **p2;
   
    p2 = &p;// tro toi dia chi cua p
    *&a = 3;
    *p =4;
    a=9;
    cout << "addr of a:" << std::hex <<  &a << endl;
    cout << "addr of p:" << std::hex <<  &p << endl;
    cout << "value of p:" << std::hex << p << endl;
    cout << "value in value of p:" <<  *p << endl;
    cout << "value in value of a:" <<  a<< endl;
    cout << "value of p2:" << std::hex << p2 << endl;
      cout << "addr of p2:" << std::hex <<  &p2 << endl;
    cout << "value of p2:" << std::hex << **p2 << endl;
    system("pause");
    return 0;
}