#pragma one
#include <iostream>
#include "pizza.h"

class HCMPerperonPizza: public Pizza{
    public:
    HCMPerperonPizza(){
        name = " HCM Perperoncini Pizza";
        dough = "HCM dough verry thick";
        sauce = "HCM Carrot sauce sweet";
        cutt = 1;
        number = 1;
        toppings = {"Chilli", "bread", "Pepperoncini", "Chees", "salty"};
    }
};