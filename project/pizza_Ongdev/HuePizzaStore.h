#pragma once
#include <iostream>
#include "pizza_store.h"
#include "hue_chees_pizza.h"
#include "hue_greek_pizza.h"
#include "hue_peperon_pizza.h"

class HuePizzaStore : public Store{
    public:
    Pizza *createPizza(std::string type){
        if (type == "chees"){
            return new HueCheesPizza();
        }else if(type == "greek"){
            return new HueGreekPizza();
        }else if(type == "peperoncini"){
            return new HuePerperonPizza();
        }else{
            return new Pizza();
        }
    }
};