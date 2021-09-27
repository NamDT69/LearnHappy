#pragma once
#include <iostream>
#include <string>
#include <iterator>
#include <vector>

class Pizza{
protected:
    std::string name;
    std::string dough;
    std::string sauce;
    int cutt;
    int number;
    std::vector <std::string> toppings;
    // std::string type;
public:
    void prepare(){
        std::cout << "preparing tools: " << name << std::endl;
        std::cout << "kneading dough ..." << dough << std::endl;
        std::cout << "doing sauce : " << sauce << std::endl;
        std::cout << "add Spices : ";
        for (int i = 0; i < toppings.size(); i ++){
            std::cout << toppings[i] << " ";
        }
        std::cout << "\nall loading 20 minute..." << std::endl;
        std::cout << "Done." << std::endl;
    }
    void bake(){
        std::cout << "baking : " << name << std::endl;
        std::cout << "loading 30 minute ..." << std::endl;
        std::cout << "Done" << std::endl;
    }
    void cut(){
        std::cout << "Cuted done: " << cutt << "pices"<< std::endl;
    }
    void box(){
        std::cout << "boxed done: " << number << std::endl;
    }
};