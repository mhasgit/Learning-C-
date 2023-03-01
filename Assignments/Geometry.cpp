#include <iostream>

using namespace std;

class Geometry
{
private:
    float pi = 3.14;

public:
    float calculateArea()
    {
        int radius;
        cout << "Enter Radius: ";
        cin >> radius;
        cout << "Circle is: ";
        return pi * radius * radius;
    }

    float calculateArea(int radius)
    {
        return 4 * pi * radius * radius;
    }

    float calculateArea(float radius, float height)
    {
        return 2 * (pi * radius * radius) + 2 * pi * radius * height;
    }
};

void printHelp()
{
    cout << "\nEnter from 1-4 Carefully: \n" << endl;
    cout << "\t1. Find Area of a Circle: \n" << endl;
    cout << "\t2. Find Area of a Sphere: \n" << endl;
    cout << "\t3. Find Area of a Cylinder: \n" << endl;
    cout << "\t4. Print Help\n" << endl;
}

int main()
{
    Geometry shape;
    int choice;
    float radius, height;

    printHelp();

    while (true)
    {
        cout << "Input Any Option: > ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << shape.calculateArea() << endl;
            break;
        case 2:
            cout << "Enter Radius of a Sphere: ";
            cin >> radius;
            cout << "Area of a sphere is: " << shape.calculateArea(radius) << endl;
            break;
        case 3:
            cout << "Enter radius of a Cylinder: ";
            cin >> radius;
            cout << "Enter Cylinder Height: ";
            cin >> height;
            cout << "Area of a Cylinder is: " << shape.calculateArea(radius, height) << endl;
            break;
        case 4:
            printHelp();
            break;
        default:
            cout << "....Wrong input. Try again...." << endl;
        }
    }

    return 0;
}
