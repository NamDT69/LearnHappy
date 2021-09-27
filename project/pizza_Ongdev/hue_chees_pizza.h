#pragma one
#include <iostream>
#include "pizza.h"
class HueCheesPizza : public Pizza{
public:
    HueCheesPizza(){
        name = " HUE Chees Pizza";
        dough = "HUE dough thick";
        sauce = "HUE Tomato sauce pepper";
        cutt = 1;
        number = 1;
        toppings = {"chees", "onion", "age", "Spicy chili pepper", "Pepper"};
    }
};