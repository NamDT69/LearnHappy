#pragma one
#include <iostream>
#include "pizza.h"

class HCMGreekPizza: public Pizza{
    public:
    HCMGreekPizza(){
        name = " HCM Grekk Pizza";
        dough = "HCM dough thin";
        sauce = "HCM Curry sauce ";
        cutt = 1;
        number = 1;
        toppings = {"Chilli", "bread", "sweet", "salty"};
    }
};