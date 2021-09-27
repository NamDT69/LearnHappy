#pragma one
#include <iostream>
#include "pizza.h"

class DaNangPerperonPizza: public Pizza{
    public:
    DaNangPerperonPizza(){
        name = "DN Perperoncini Pizza";
        dough = "DN dough verry thick";
        sauce = "DN Carrot sauce salty";
        cutt = 1;
        number = 1;
        toppings = {"Chilli", "bread", "Pepperoncini", "Chees", "Salty"};
    }
};