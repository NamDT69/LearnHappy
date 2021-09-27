#pragma one
#include <iostream>
#include "pizza.h"

class DaNangGreekPizza: public Pizza{
    public:
    DaNangGreekPizza(){
        name = "DN Grekk Pizza";
        dough = "Dn dough thin";
        sauce = "DN Chilli sauce Sweet";
        cutt = 1;
        number = 1;
        toppings = {"Chilli", "bread", "Salty"};
    }
};