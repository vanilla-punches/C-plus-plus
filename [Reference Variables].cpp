#include <iostream>

using namespace std;

int main()
{
    string name = "iphone";

    cout << "What are you looking for: " << name << " location of your phone: " << &name << endl;

    string &apple = name;

    cout << "What are you looking for: " << apple << " location of your phone: " << &apple << endl;


    apple = "pineapple";

    cout << "What are you looking for: " << name << "location of your phone: " << &name << endl;

    cout << "What are you looking for: " << apple << "location of your phone: " << &apple << endl;

    return 0;
    /*
    Reference Variable must be initialized when created
    Reference Variable can't change association or connections
    Regerence Variable must be the same type as associated variable
    */

}

