#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char *argv[])
{
    //arguments counter - argc
    //arguments values - argc

    // for (int i = 0; i < argc; i++)
        // cout << argc[i] << endl;

    char a[] = {'a', 'b', 'c', 'd'};
    char *b = "this is a test";

    char *c[] = {"lala", "land","special"};
    // cout << c[2] << endl;

    char x[] = "a";
    char y[] = "b";

    cout << (x == y) << endl;
    cout << (&x[0] == &y[0]) << endl;

    cout << (strcmp(x,y)) << endl; // 0 - variables are the same, 1 the first string is greater, -1 that the first string is lower

    return 0;
}
