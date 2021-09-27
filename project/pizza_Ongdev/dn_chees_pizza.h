#pragma one
#include <iostream>
#include "pizza.h"
class DaNangCheesPizza : public Pizza{
public:
    DaNangCheesPizza(){
        name = "DN Chees Pizza";
        dough = "DN dough thick salty";
        sauce = "DN Tomato sauce";
        cutt = 1;
        number = 1;
        toppings = {"chees", "onion", "age", "salty", "Chilli"};
    }
};