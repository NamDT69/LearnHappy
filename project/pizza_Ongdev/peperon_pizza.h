#pragma one
#include <iostream>
#include "pizza.h"

class PerperonPizza: public Pizza{
    public:
    PerperonPizza(){
        name = "Perperoncini Pizza";
        dough = "dough verry thick";
        sauce = "Carrot sauce";
        cutt = 1;
        number = 1;
        toppings = {"Chilli", "bread", "Pepperoncini", "Chees"};
    }
};