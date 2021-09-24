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

void Person::getAllPerson(vector<Person> persons) {
    for(Person people : persons){
        cout<<people.getName()<<" "<<people.getLuck()<<endl;
    }
}

string Person::luckiest(vector<Person> persons){
    string winner=persons[0].getName();
    int highest = persons[0].getLuck();
    for(int i=1; i<=4; i++){
        if(highest < persons[i].getLuck()){
            highest = persons[i].getLuck();
            winner=persons[i].getName();
        }
    }
    return winner;
}

void Person::changeLuck(Person &person1, Person &person2) {
    int forSwap = person1.getLuck();
    person1.setLuck(person2.getLuck());
    person2.setLuck(forSwap);
}

