#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    unsigned long long int po = (unsigned long long int)pow(2,31);
    //uint_fast64_t  nhanh hơn giống vs long long int 
    uint_fast64_t pa = (uint_fast64_t)(pow(2, 31));
    cout << po;
    cout << endl<< pa;
}