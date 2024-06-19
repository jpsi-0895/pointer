#include "include/Person.hpp"
#include <iostream>
#include <string>


Person::Person(const std::string &n, int a){
    name = n;
    age = a;
}

// Person::Person(); name(""),age(0){}

void Person::display() const
{
    std::cout << "Name: " << name << std::endl;
}
