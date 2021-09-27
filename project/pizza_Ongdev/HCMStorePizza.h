#pragma once
#include <iostream>
#include <string>
#include "pizza.h"
#include "pizza_store.h"
#include "hcm_chees_pizza.h"
#include "hcm_greek_pizza.h"
#include "hcm_peperon_pizza.h"

class HCMPizzaStore : public Store{
    public:
   
    Pizza *createPizza(std::string typee){
        if (typee == "chees"){
            return new HCMCheesPizza();
        }else if(typee == "greek"){
            return new HCMGreekPizza();
        }else if(typee == "peperoncini"){
            return new HCMPerperonPizza();
        }else{
            return new Pizza();
        }
    }
};