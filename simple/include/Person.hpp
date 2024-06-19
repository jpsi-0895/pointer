#ifndef PERSON_H
#define PERSON_H
#include <string>
class Person
{
private:
    std::string name;
    int age;

public:
    Person(const std::string &n, int a);

    void display() const;
};

#endif //PERSON_H