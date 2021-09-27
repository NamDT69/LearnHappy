#pragma once
#include <iostream>
#include <string>
#include "pizza.h"

class Store {

public:
    virtual Pizza *createPizza(std::string){
        return new Pizza();
    }
    void oder(std::string);
    
};

void Store::oder(std::string typee){
    Pizza * pizza ;
    pizza = createPizza(typee);
    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();
}