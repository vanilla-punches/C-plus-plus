#include <iostream>
using namespace std;


int main()
{

string name;
cout << "what is your full name?" << endl;
cin >> name;
cin.ignore(10000, '\n');

int age;
cout << "How old are you?" << endl;
cin >> age;
cin.clear();
cin.ignore(10000, '\n');

}
