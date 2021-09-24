#include "Person.h"
#include <algorithm>

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

    person1.getAllPerson(persons);

    string winner = person1.luckiest(persons);
    cout<<"Luckiest person is - "<<winner<<endl;

    person1.changeLuck(persons[rand()%4], persons[rand()%4]);
    //person1.changeLuck(person1)

    person1.getAllPerson(persons);
    winner = person1.luckiest(persons);
    cout<<"New luckiest person is - "<<winner<<endl;

    //Person newPerson = new Person("Sabo", 20, 10);

    return 0;
}