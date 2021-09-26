#include "Person.h"
#include <algorithm>

int main() {
    srand(time(0));

    Person person1("Aila", 25, rand()%10);
    Person person2("Kara", 23, rand()%10);
    Person person3("Jack", 27, rand()%10);
    Person person4("David", 18, rand()%10);
    Person person5("Bruce", 30, rand()%10);

    vector<Person> persons {person1,person2,person3};
    persons.push_back(person4);
    persons.push_back(person5);

    Person::getAllPerson(persons);

    string winner = Person::luckiest(persons);
    cout<<"Luckiest person is - "<<winner<<"\n\n";

    Person::changeLuck(persons[rand()%4], persons[rand()%4]);
    //person1.changeLuck(person1)
    Person::getAllPerson(persons);
    winner = Person::luckiest(persons);
    cout<<"New luckiest person is - "<<winner<<"\n\n";

    //Objects in static memory are created and deleted by the compiler.
    //Static memory is cleared at program termination.
    //Person person1("Aila", 25, rand()%10);

    //Dynamic objects exist until explicitly removed.
    //Dynamic objects are allocated in heap.
    Person* newPerson = new Person("Sabo", 20, 10);
    //The new operator allocates space in heap for an object and returns a pointer to that object.
    cout<<"Person who was create in heap memory - ";
    cout<<newPerson->getName()<<" "<<newPerson->getAge()<<" "<<newPerson->getLuck();
    //The delete operator takes a pointer to a dynamic object and removes it from memory.
    //This should be especially taken into account if a dynamic object is created in one part of the code and used in another.
    //Indeed, after using a certain function, the dynamic object will not be deleted, as it is done with local automatic objects.
    //Therefore, it must be explicitly deleted using the delete operator.
    delete newPerson;
    //Using an object after deleting it can lead to unpredictable results
    //cout<<newPerson->getName()<<" "<<newPerson->getAge()<<" "<<newPerson->getLuck();
    return 0;
}
/*
int arr[3][3]={ {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
int t=0;
for(int i=0; i<3; i++){
 for(int j=0; j<3; j++){
  t+=arr[i][j];
 }//1+2+3+4+5+6+7+8+9
}
************************************************
for(int i=0; i<3; i++){
 for(int j=0; j<3; j++){
  t+=arr[j][i]; //here I swapped i and j
 }//1+4+7+2+5+8+3+6+9
}
 */
/*
 * When retrieving a specific matrix element from memory, the elements
 * next to it will also be retrieved and stored in the cache line.
 * If order is in use, it will result in fewer memory accesses, since the
 * next few values needed for subsequent computations are already in the cache line.
 */