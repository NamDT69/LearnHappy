#include <iostream>
#include <string>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main(){
    //thực ra các phần tử đươcj cấp phát đôngj vậy nên ko nên xài con trỏ char vì nó ko tự động delete như string 
    const char *colour[4] = { "Blue", "Red", "Orangerrrr", "Yellow" };
 
    // Printing Strings stored in 2D array
    cout <<"\n";
    for (int i = 0; i < 4; i++)
       cout << colour[i] << "\t" << colour + i << "\t" << sizeof(colour[i])<< "\n";
    cout << &colour[2][9];
    cout <<"\n";

    // Initialize 2D array
    char colourr[4][10] = { "Blue", "Red", "Orange",
                           "Yellow" };
 
    // Printing Strings stored in 2D array
    for (int i = 0; i < 4; i++)
        cout << colourr + i << "\n";
    cout <<"\n";

    string s[] = { "Blue", "Red", "Orange",
                           "Yellow" };
     for (int i = 0; i < 4; i++)
        cout << s + i << "\n";
    // int a = 1025;
    // int *p = &a;
    // char *pp = (char*)p;
    // printf("%d", *(pp+ 3));// 00000000 00000000 00000100 00000001
}