#pragma one
#include <iostream>
#include "pizza.h"

class HueGreekPizza: public Pizza{
    public:
    HueGreekPizza(){
        name = " HUE Grekk Pizza";
        dough = "HUE dough thin";
        sauce = "HUE Chilli sauce";
        cutt = 1;
        number = 1;
        toppings = {"Chilli", "bread"};
    }
};