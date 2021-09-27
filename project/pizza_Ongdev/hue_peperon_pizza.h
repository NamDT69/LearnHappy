#pragma one
#include <iostream>
#include "pizza.h"

class HuePerperonPizza: public Pizza{
    public:
    HuePerperonPizza(){
        name = " HUE Perperoncini Pizza";
        dough = "HUE dough verry thick";
        sauce = "HUE Carrot sauce hot";
        cutt = 1;
        number = 1;
        toppings = {"Chilli", "bread", "Pepperoncini", "Chees" , "Spicy chili pepper", "pepper", "salty"};
    }
};