#include <iostream>

using namespace std;

void swap(int &, int &);

int main()
{
    int a = 100;
    int b = 900;

    swap(a, b);

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}

void swap (int &x, int &y)
{
    int t;
    t = x;
    x = y;
    y = t;

}
