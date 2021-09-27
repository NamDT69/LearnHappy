#pragma one
#include <iostream>
#include "pizza.h"

class GreekPizza: public Pizza{
    public:
    GreekPizza(){
        name = "Grekk Pizza";
        dough = "dough thin";
        sauce = "Chilli sauce";
        cutt = 1;
        number = 1;
        toppings = {"Chilli", "bread"};
    }
};