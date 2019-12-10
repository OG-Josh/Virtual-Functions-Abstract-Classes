/* ======================================================================================= */
/* ======================================================================================= */
// Class: CS-1C
// Creator: Joshua Yang
// Contact: joshuayang0324@gmail.com
// Professor: Kath
// Date: 3/13/2019
/* ======================================================================================= */
/* ======================================================================================= */
// Work: 
// CS1C Spring 2019 TTH HW-1 50pts Due: Th 1/24/2019
// cs1c@cs1c-VirtualBox ~/cs1c/hw/01 $ script hw01.scr
// Script started, file is hw01.scr
// cs1c@cs1c-VirtualBox ~/cs1c/hw01 $ date
// ... 
// Cs1c@cs1c-VirtualBox ~/cs1c/hw/01 $ Is -1
// ... 
// Cs1c@cs1c-VirtualBox ~/cs1c/hw/01 $ make all
// ...
// Cs1c@cs1c-VirtualBox ~/cs1c/hw/01 $ Is -1
// ...
// Cs1c@cs1c-VirtualBox ~/cs1c/hw/01 $ ./hw01
// ...//print out parts a, d & g above
// cs1c@cs1c-VirtualBox ~/cs1c/hw/01 $ exit
// Script done, file is hw01.scr
// Cs1c@cs1c-VirtualBox ~/cs1c/hw/01 $ make tar
// ...
// Submit the tar package file hw01.tar by Thursday January 24, 2019.
/* ======================================================================================= */
/* ======================================================================================= */
// Code:


#include <iostream>
#include <cmath>
using namespace std;

class Shape
{
    public:
        /** Question 1 */
        virtual double calcPerimeter() = 0;
        virtual double calcArea() = 0;

        /** Question 2 */
        void printPerimeter()
        {
            cout << "Perimeter: " << calcPerimeter() << endl;
        }
        void printArea()
        {
            cout << "Area: " << calcArea() << endl;
        }
    private:
};

class Rectangle: public Shape
{
    public:
        Rectangle()
        {
            length = width = 0;
            cout << "Enter length of rectangle: ";
            cin >> length;
            cout << "Enter width of rectangle: ";
            cin >> width;
        }
        double calcPerimeter()
        {
            double perimeter = (double) (length + width) * 2;
            return perimeter;
        }

        double calcArea()
        {
            double area = (double) length * width;
            return area;
        }
    private:
        int length;
        int width;
};

class Triangle: public Shape
{
    public:
        Triangle()
        {
            a = b = c = 0;
            cout << "Enter side 1 of Triangle: ";
            cin >> a;
            cout << "Enter side 2 of Triangle: ";
            cin >> b;
            cout << "Enter side 3 of Triangle: ";
            cin >> c;
        }
        double calcPerimeter()
        {
            double perimeter = (double) a + (double) b + (double) c;
            return perimeter;
        }

        double calcArea()
        {
            double halfPerimete = (double) (a + b + c) / 2;
            double area = sqrt(halfPerimete * (halfPerimete - a) * (halfPerimete - b) * (halfPerimete - c));
            return area;
        }
    private:
        int a;
        int b;
        int c;
};

int main(int argc, char* argv[])
{
    /*Question 3*/
    cout << "Instantiate a Rectangle:" << endl;
    Rectangle rec;

    cout << endl << "Instantiate a Triangle:" << endl;
    Triangle tri;
    cout << endl << "Perimeter and Area of Rectangle:" << endl;
    rec.printPerimeter();
    rec.printArea();
    cout << endl << "Perimeter and Area of Triangle: " << endl;
    tri.printPerimeter();
    tri.printArea();
}
