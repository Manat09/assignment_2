#include <iostream>
#include "Person.h"

int main() {
    srand(time(0));
    Person person1("Aila", 25, rand()%10);
    Person person2("Kara", 23, rand()%10);
    Person person3("Jack", 27, rand()%10);
    Person person4("David", 18, rand()%10);
    Person person5("Bruce", 30, rand()%10);

    vector<Person> persons;
    persons.push_back(person1);
    persons.push_back(person2);
    persons.push_back(person3);
    persons.push_back(person4);
    persons.push_back(person5);

    return 0;
}
