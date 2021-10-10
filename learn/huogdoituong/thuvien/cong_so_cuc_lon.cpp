#include <iostream>
#include <string>
using namespace std;
int main() {
     string num1 =  "99";
     string num2 = "9";
     string s = "";
     int x, b, t;
     int h1 = 0, h2 = 0;
     int d = 0;

     if (num1.length() >= num2.length()){
          b = num2.length();
          h1 = num1.length() - num2.length();
     }else {
          b = num1.length();
          h2 = num2.length() - num1.length();
     }



     for (int i = b- 1; i >= 0; --i){
          
          x = (int(num1[i + h1]) - 48) + (int(num2[i + h2]) - 48) + d;
          t = x;
          x = (x % 10) ;
          d = t / 10;
          s.push_back(char(x) + '0');
     }




     if (num1.length() > num2.length()){
          for (int i = h1 - 1 ; i >= 0; --i){
               x = (int(num1[i]) - 48) + d;
               t = x;
               x = (x % 10) ;
               d = t / 10;
               s.push_back(char(x) + '0');
          }
     }else if (num1.length() < num2.length()){
         for (int i = h2 -1 ; i >= 0; --i){
               x = (int(num2[i]) - 48) + d;
               t = x;
               x = (x % 10) ;
               d = t / 10;
               s.push_back(char(x) + '0');
          }
     }

     if (d == 1)
          s.push_back(char(d) + '0');

     int n = s.length();

     for (int i = 0; i < n / 2 ; i++)
        swap(s[i], s[n - i - 1]);
     cout << s;
     // cout << endl << 9 / 10;
     
     return 0;
}