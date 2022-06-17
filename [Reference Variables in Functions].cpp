#include <iostream>

using namespace std;

int swap(int &, int &);

int main()
{
    int a = 100;
    int b = 900;
    int c = swap(a,b);

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;

    return 0;
}

int swap (int &x, int &y)
{
    int t;
    t = x;
    x = y;
    y = t;

    return x;

}
