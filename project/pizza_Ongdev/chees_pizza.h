#ifndef CHEES
#define CHEES
#include "pizza.h"
class CheesPizza : public Pizza{
public:
    CheesPizza(){
        name = "Chees Pizza";
        dough = "dough thick";
        sauce = "Tomato sauce";
        cutt = 1;
        number = 1;
        toppings = {"chees", "onion", "age"};
    }
};
#endif