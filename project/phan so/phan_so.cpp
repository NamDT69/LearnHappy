// #pragma one
// #include <iostream>
// #include "phanso.h"
// #include <math.h>

// void Fraction::reduce(){
//     double ucln;
//     double a = abs(numerator);
//     double b = abs(denominator);
//     if (numerator == 0  && denominator == 0){
//         ucln = a - b;
//     }else{
//         int t ;
//         while (a != b){
//             if (a > b){
//                 //ko dùng chia lây phần dư vì đây là số thập phân nên ko được 
//                 a -= b;
//             }else{
//                 b -= a;
//             }
//         }
//         ucln = a;
//     }
//     numerator = numerator / ucln;
//     denominator = denominator /ucln;
// }
// Fraction::Fraction(){
//     this->numerator = 0;
//     this->denominator = 1;
// }
// Fraction::Fraction(double a){
//     this->numerator = a;
//     this->denominator = 1;
// }
// Fraction::Fraction(double a, double b){
//     this->numerator = a;
//     this->denominator = b;
// }
// Fraction* Fraction::operator + (const Fraction *a){
//     Fraction *res = new Fraction();
//     res->denominator = this->denominator * a->denominator;
//     res->numerator = (this->numerator * a->denominator + a->numerator * this->denominator);
//     res->reduce();
//     return res;
// }

// Fraction* Fraction::operator - (const Fraction *a){
//     Fraction *res = new Fraction();
//     res->denominator = this->denominator * a->denominator;
//     res->numerator = (this->numerator * a->denominator - a->numerator * this->denominator);
//     res->reduce();
//     return res;
// }
// Fraction* Fraction::operator * (const Fraction *a){
//     Fraction *res = new Fraction();
//     res->denominator = this->denominator * a->denominator;
//     res->numerator = (this->numerator * a->numerator);
//     res->reduce();
//     return res;
// }

// Fraction* Fraction::operator / (const Fraction *a){
//     Fraction *res = new Fraction();
//     res->denominator = this->denominator * a->numerator;
//     res->numerator = (this->numerator * a->denominator);
//     res->reduce();
//     return res;
// }

// bool Fraction::operator > (const Fraction *a){
//     if (this->numerator / this->denominator > a->numerator / a->denominator)
//         return true;
//     else return false;
// }
// bool Fraction::operator < (const Fraction *a){
//     if (this->numerator / this->denominator < a->numerator / a->denominator)
//         return true;
//     else return false;
// }
// bool Fraction::operator >= (const Fraction *a){
//     if (this->numerator / this->denominator >= a->numerator / a->denominator)
//         return true;
//     else return false;
// }
// bool Fraction::operator <= (const Fraction *a){
//     if (this->numerator / this->denominator <= a->numerator / a->denominator)
//         return true;
//     else return false;
// }
// bool Fraction::operator == (const Fraction *a){
//     if (this->numerator / this->denominator == a->numerator / a->denominator)
//         return true;
//     else return false;
// }
// bool Fraction::operator != (const Fraction *a){
//     if (this->numerator / this->denominator != a->numerator / a->denominator)
//         return true;
//     else return false;
// }
// std::ostream & operator << (std::ostream &os, const Fraction &a){
//     os << a.numerator << "/" << a.denominator;
//     return os;
// }
