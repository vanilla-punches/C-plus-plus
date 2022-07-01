#include <iostream>

using namespace std;
/* classes */

struct PersonalData
{
    private:
        short age;
    public:
        void setAge(int value)
        {
            if (value < 0)
                age = 0;
            else
                age = value;
        }
        short getAge(){return age;}
};

int main()
{
    PersonalData person;
    PersonalData person2;

    person.setAge(-50);
    person2.setAge(30);

    cout << person.getAge() << endl;
    cout << person2.getAge() << endl;

    return 0;

}
