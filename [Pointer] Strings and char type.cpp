#include <iostream>

using namespace std;

int main()
{

    string text = "trala"; //t r a l a /0
/*
    for (int i = 0; i < text.length(); i++)
    {
        cout << text[i] << endl;
    }
*/

    char ch = text[0];

    cout << ch << endl;

    char characters[] = "123alveirnlid";

    cout << characters[0] << endl; //this one and the bottom one are the same
    cout << *(characters) << endl;

    cout << characters[1] << endl;
    cout << *(characters+1) << endl;

    // or we can do this way

    char *p = characters;

    cout << p[0] << endl;
    cout << *(p) << endl;

    cout << p[1] << endl;
    cout << *(p+1) << endl;

    cout << endl << endl;

    string text1 = "This is a test";

    const char *text2 = text1.c_str();

    cout << text2 << endl;

    char array[] = "This is a text";

    string test3 = array;

    cout << test3 << endl;

    cout << endl << endl;


    const char *a = "this is a test 123456789";

    cout << a[0] << endl; //we can't change a[0] because it is reserving the pointer

    cout << a << endl;

    char b[] = "this is a test 987654321";

    b[0] = 'g'; //we can change b[]

    cout << b << endl;


    char * const dynamic_array = new char[50];
    dynamic_array[0] = 'k';
    dynamic_array[1] = 'k';

    cout << dynamic_array << endl;

    delete [] dynamic_array;


    return 0;
}
