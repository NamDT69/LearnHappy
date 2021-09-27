#pragma one
#include <iostream>
#include<math.h>
class Fraction{
private:
    double numerator;
    double denominator;
public:
    Fraction();
    Fraction(double );
    Fraction(double ,double );
    Fraction operator=(const Fraction &a ){
        this->numerator = a.numerator;
        this->denominator= a.denominator;
        return *this;
    }
    Fraction operator+(const Fraction &a );
    Fraction operator-(const Fraction &a );
    Fraction operator*(const Fraction &a );
    Fraction operator/(const Fraction &a );
    bool operator>(const Fraction &a );
    bool operator<(const Fraction &a );
    bool operator>= (const Fraction &a );
    bool operator<= (const Fraction &a );
    bool operator==(const Fraction &a );
    bool operator!=(const Fraction &a );
    void reduce();
    friend std::ostream & operator<< (std::ostream &os, const Fraction &a);
    friend std::istream & operator>> (std::istream &is, Fraction &a);
};

void Fraction::reduce(){
    double ucln;
    double a = abs(numerator);
    double b = abs(denominator);
    if (numerator == 0  && denominator == 0){
        ucln = a - b;
    }else{
        int t ;
        while (a != b){
            if (a > b){
                //ko dùng chia lây phần dư vì đây là số thập phân nên ko được 
                a -= b;
            }else{
                b -= a;
            }
        }
        ucln = a;
    }
    numerator = numerator / ucln;
    denominator = denominator /ucln;
}
Fraction::Fraction(){
    this->numerator = 0;
    this->denominator = 1;
}
Fraction::Fraction(double a){
    this->numerator = a;
    this->denominator = 1;
}
Fraction::Fraction(double a, double b){
    this->numerator = a;
    this->denominator = b;
}
Fraction Fraction::operator+(const Fraction &a){
    Fraction res;
    res.denominator = this->denominator * a.denominator;
    res.numerator = (this->numerator * a.denominator + a.numerator * this->denominator);
    res.reduce();
    return res;
}

Fraction Fraction::operator-(const Fraction &a){
    Fraction res;
    res.denominator = this->denominator * a.denominator;
    res.numerator = (this->numerator * a.denominator - a.numerator * this->denominator);
    res.reduce();
    return res;
}
Fraction Fraction::operator*(const Fraction &a){
    Fraction res;
    res.denominator = this->denominator * a.denominator;
    res.numerator = (this->numerator * a.numerator);
    res.reduce();
    return res;
}

Fraction Fraction::operator/(const Fraction &a){
    Fraction res;
    res.denominator = this->denominator * a.numerator;
    res.numerator = (this->numerator * a.denominator);
    res.reduce();
    return res;
}

bool Fraction::operator>(const Fraction &a){
    if (double(this->numerator / this->denominator) >  double(a.numerator / a.denominator))
        return true;
    else return false;
}
bool Fraction::operator<(const Fraction &a){
    if (double(this->numerator / this->denominator) <  double(a.numerator / a.denominator))
        return true;
    else return false;
}
bool Fraction::operator>=(const Fraction &a){
    if (double(this->numerator / this->denominator) >= double(a.numerator / a.denominator))
        return true;
    else return false;
}
bool Fraction::operator<=(const Fraction &a){
    if (double(this->numerator / this->denominator) <= double(a.numerator / a.denominator))
        return true;
    else return false;
}
bool Fraction::operator==(const Fraction &a){
    if (double(this->numerator / this->denominator) == double(a.numerator / a.denominator))
        return true;
    else return false;
}
bool Fraction::operator!=(const Fraction &a){
    if (double(this->numerator / this->denominator) != double(a.numerator / a.denominator))
        return true;
    else return false;
}

//hàm bạn này truy cập vào thành phần của Fraction . rồi ostream thực hiện out put ra 
std::ostream & operator<<(std::ostream &os, const Fraction &a){
    
    os << a.numerator << "/" << a.denominator;
    return os;
}

std::istream & operator>>(std::istream &is,Fraction &a){
    std::cout << "nhap tu:";
    is >> a.numerator;
    std::cout << "nhap mau:";
    while ((is >> a.denominator) && a.denominator == 0){
        std::cout << "nhap lai:";
    }
    a.reduce();
    return is;
}
