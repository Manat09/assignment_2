#ifndef CLION_PROJECTS_PERSON_H
#define CLION_PROJECTS_PERSON_H
#include <iostream>
#include <vector>
#include <string>
#include <ctime>
using namespace std;

class Person{
public:
    Person();

    Person(const string &name, int age, int luck);

    const string &getName() const;

    void setName(const string &name);

    int getAge() const;

    void setAge(int age);

    int getLuck() const;

    void setLuck(int luck);

    string luckiest(Person person);

private:
    string name;
    int age;
    int luck;
};
#endif //CLION_PROJECTS_PERSON_H
