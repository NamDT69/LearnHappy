#include <iostream>
#include <string>
//#include <string.h>

using namespace std;
int main(void) {
    string a;
    getline(cin ,a);
    string::size_type start = 0;// tra ve index tim kiem dc cua string
    string::size_type end = 0;
    while ((end = a.find(" ", start))/*  */ != string::npos) {// npos giong len tra ve size lon nhat
        cout << a.substr(start, end - start) << " ";// in ra khoang cach giua chung

        start = end + 1;
    }
    cout << a.substr(start);
    return 0;
}