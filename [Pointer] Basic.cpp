#include <iostream>

using namespace std;

struct something
{
    int a, b, c, d; // 4 x 4 = 16 bytes
};

int main()
{
    int x = 5;
    double d = 1234.56;
    cout << x << endl;
    cout << &x << endl; // & : address of operator

    // de-reference operator (*)

    cout << *&x << endl; // * points what you have in &x address

    cout << endl << endl;

    int *ptr_x = &x, *ptr_y = &x; // * used as a pointer (reference)
    double *ptr_d = &d;

    cout << ptr_x << endl;
    cout << *ptr_x << endl; // * is de-referencing in this case
    cout << typeid(&x).name() << endl; // type of &x

    cout << endl << endl;

    cout << sizeof(x) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;
    cout << sizeof(&x) << " " << sizeof(ptr_d) << endl;

    cout << endl << endl;

    cout << ptr_d << endl;
    cout << *ptr_d << endl;

    cout << endl << endl;

    something ss;
    something *ptr_s;

    cout << sizeof(something) << endl;
    cout << sizeof(ptr_s) << endl;


    return 0;
}


