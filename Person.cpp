//
// Created by Computer on 24.09.2021.
//

#include "Person.h"

Person::Person() {

}

Person::Person(const string &name, int age, int luck) : name(name), age(age), luck(luck) {}

const string &Person::getName() const {
    return name;
}
void Person::setName(const string &name) {
    Person::name = name;
}
int Person::getAge() const {
    return age;
}
void Person::setAge(int age) {
    Person::age = age;
}
int Person::getLuck() const {
    return luck;
}
void Person::setLuck(int luck) {
    Person::luck = luck;
}
string Person::luckiest(Person person){

}