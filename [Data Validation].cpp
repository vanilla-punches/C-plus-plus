#include <iostream>
#include <limits>
#define PI 3.14

using namespace std;

void inimenu();
void menuD(int);
double areaCircle (double);
double areaSquare (double);
double areaRectangle (double, double);
double areaTriangle (double, double);
bool isValid(string);
bool isValid();
int main()
{
    int choice;
    char cont;
    do
    {

    system("cls"); //clear screen = cls
    inimenu();

    while(!(cin >> choice))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        system("cls");
        inimenu();
        cout << "Entered the wrong input data" << endl;

    }

    menuD (choice);

    do
    {


    cout << "Do you want to continue the program? (Y/N)" << endl;
    cin >> cont;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    while(cont != 'y' && cont != 'Y' && cont != 'n' && cont != 'N');

    }
    while (cont == 'y' || cont == 'Y');

    return 0;
}

void inimenu()
{

    cout << "Enter option: " << endl;
    cout << "1. Circle: " << endl;
    cout << "2. Square: " << endl;
    cout << "3. Rectangle: " << endl;
    cout << "4. Triangle: " << endl;
}

void menuD(int choice)
{
    double r, a, b, h;
    switch(choice)
    {
        case 1:
            do
            {
            cout << "Enter the radius" << endl;
            cin >> r;
            }
            while(!isValid());
            areaCircle(r);
            break;
        case 2:
            cout << "Enter the side of a square" << endl;
            do
            {
            cin >> a;
            }
            while(!isValid("The data is wrong, please type it again"));
            areaSquare(a);
            break;
        case 3:
            cout << "Enter the width and length of a rectangel" << endl;
            do
            {
            cin >> a >> b;
            }
            while(!isValid("The data is wrong, please type it again:"));
            areaRectangle(a, b);
            break;
        case 4:
            cout << "Enter the width and height of a triangle" << endl;
            do
            {
            cin >> a >> h;
            }
             while(!isValid("The data is wrong, please type it again:"));
            areaTriangle(a,h);
            break;
        default:
            cout << "You didn't choose any of the option from above" << endl;
    }
}

double areaCircle(double r)
{
    double result = PI * r * r;
    cout << "The are of a circle that radius is: " << r << " = " << result << endl;
    return result;
}

double areaSquare (double a)
{
    double result = a * a;
    cout << "The are of a Square is: " << " = " << result << endl;
    return result;

}
double areaRectangle (double a, double b)
{
    double result = a * b;
    cout << "The are of a Rectangle is: " << " = " << result << endl;
    return result;
}
double areaTriangle (double a, double h)
{
    double result = (a * h) / 2;
    cout << "The are of a Triangle is: " << " = " << result << endl;
    return result;
}
bool isValid(string error_msg)
{
    if (cin.rdstate()) //state is wrong when it is not equal to 0
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        system("cls");
        inimenu();
        cout << error_msg << endl;
        return false;
    }

    return true;
}
bool isValid()
{
    if (cin.rdstate()) //state is wrong when it is not equal to 0
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        system("cls");
        inimenu();
        return false;
    }

    return true;
}
