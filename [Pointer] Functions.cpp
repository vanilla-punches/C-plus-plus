#include <iostream>

using namespace std;

/*
void multiplyBy(int &, int);
int main()
{

    int a = 10;

    multiplyBy(a, 5);

    cout << a << endl;

    return 0;
}
void multiplyBy(int &var, int amount)
{

    var *= amount;

}
*/

// What if we do the above codes with pointers?

/*
void multiplyBy(int *, int);
int main()
{

    int a = 10;

    multiplyBy(&a, 5);

    cout << a << endl;

    return 0;
}
void multiplyBy(int *var, int amount)
{
    // int *var = &a;
    *var = *var *amount;

}
*/

int * multiplyBy(int *, int);
void multiplyArrayBy(int *, int);
int main()
{
    /*
    int a = 10;

    cout << a << endl;

    int *b = multiplyBy(&a, 5);

    cout << a << endl;
    cout << b << endl;
    cout << *b << endl;
    */

    int array[10];
    cout << sizeof(array[0]) << endl;

    for (int i = 0; i < 10; i++)
    {
        array[i] = i;
        //cout << "array [" << i << "] = " << array[i] << endl;
    }
    multiplyArrayBy(array, 5);
     for (int i = 0; i < 10; i++)
    {
        cout << "array [" << i << "] = " << array[i] << endl;
    }

    return 0;
}
int * multiplyBy(int *var, int amount)
{
    // int *var = &a;
    *var = *var * amount;

    return var;
}
void multiplyArrayBy(int *array, int amount)
{
    for (int i = 0; i < 10; i++)
    {
        array[i] = array[i] * amount;
    }

}
