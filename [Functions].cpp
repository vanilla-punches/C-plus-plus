#include <iostream>
#define PI 3.14
using namespace std;

void inimenu();
void menuD(int);
double areaCircle (double);
double areaSquare (double);
double areaRectangle (double, double);
double areaTriangle (double, double);

int main()
{
    int choice;
    char cont;
    do
    {

    system("cls");
    inimenu();

    cin >> choice;

    menuD (choice);

    do
    {


    cout << "Do you want to continue the program? (Y/N)" << endl;
    cin >> cont;
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
            cout << "Enter the radius" << endl;
            cin >> r;
            areaCircle(r);
            break;
        case 2:
            cout << "Enter the side of a square" << endl;
            cin >> a;
            areaSquare(a);
            break;
        case 3:
            cout << "Enter the width and length of a rectangel" << endl;
            cin >> a >> b;
            areaRectangle(a, b);
            break;
        case 4:
            cout << "Enter the width and height of a triangle" << endl;
            cin >> a >> h;
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
