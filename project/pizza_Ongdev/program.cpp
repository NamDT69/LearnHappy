#include <iostream>
#include "pizza_store.h"
// #include "greek_pizza.h"
// #include "peperon_pizza.h"
// #include "chees_pizza.h"
#include "HCMStorePizza.h"
#include "DNPizzaStore.h"
#include "HuePizzaStore.h"
int main(){
    
    Store *a = new HCMPizzaStore();
    // a->oder("chees");
    // std::cout << a;
    // a->oder("greek");
    // std::cout << &a;
    // delete a;
    a->oder("greek");
    return 0;
}