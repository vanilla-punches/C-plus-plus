#include <iostream>

using namespace std;
/* DATA STRUCTURES */

struct personalData
{
    string name;
    string surname;
    string telephoneNumber;
    short age;


}a,b;
void test(personalData *);
int main()
{
    personalData person[5];
    a.age = 50;

    cout << a.age << endl;

    person[0].name = "Ian";
    person[1].name = "Julia";
    person[0].surname = "Lee";
    person[0].telephoneNumber = "6655896612";
    person[0].age = 11;
/*
    cout << person[0].name << endl;
    cout << person[0].surname << endl;
    cout << person[0].telephoneNumber << endl;
    cout << person[0].age << endl;
*/
/*
    cout << (*person).name << endl;
    cout << (*&person[0]).name << endl;
    cout << (person+1)->name << endl;
*/

    personalData *p = person;

    cout << p->name << endl;

    test(p); // test(person)
    cout << p->name << endl;
    return 0;
}

void test(personalData *person)
{
    person->name = "Donna";

}
