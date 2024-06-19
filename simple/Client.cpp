#include <iostream>
#include <string>
#include "include/Person.hpp"


int main(int argc, char const *argv[])
{
    const int numPersons = 3;

    // Person **people = new Person *[numPersons];
    // std::cout<< "(**people)";

    Person person("name", 89);

    // people[1] = new Person("jai pal", 20);
    // people[3] = new Person("jai pal saini", 28);

    return 0;
}
