#pragma once
#include <iostream>
#include "pizza_store.h"
#include "dn_chees_pizza.h"
#include "dn_greek_pizza.h"
#include "dn_peperon_pizza.h"

class DaNangPizzaStore : public Store{
    public:
   
    Pizza *createPizza(std::string type){
        if (type == "chees"){
            return new DaNangCheesPizza();
        }else if(type == "greek"){
            return new DaNangGreekPizza();
        }else if(type == "peperoncini"){
            return new DaNangPerperonPizza();
        }else{
            return new Pizza();
        }
    }
};