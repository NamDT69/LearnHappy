#pragma one
#include <iostream>
#include "pizza.h"
class HCMCheesPizza : public Pizza{
public:
    HCMCheesPizza(){
        name = " HCM Chees Pizza";
        dough = "HCM dough thick";
        sauce = "HCM Tomato sauce sweet";
        cutt = 1;
        number = 1;
        toppings = {"chees", "onion", "age", "sweet" , "salty"};
    }
};