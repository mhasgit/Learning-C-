#include <iostream>
using namespace std;

class sampleclass
{
public:
    sampleclass()
    {
        age = ++x;
        ptr = nullptr;
    }
    static int x;
    int age;
    sampleclass *ptr;
};

int sampleclass::x = 0;

class Distance
{
private:
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0.0)
    {
    }
    Distance(int ft, float in) : feet(ft), inches(in)
    {
    }
    void getdist()
    {
        cout << "\nEnter feet : ";
        cin >> feet;
        cout << "Enter inches : ";
        cin >> inches;
    }
    void showdist() const
    {
        cout << feet << "'\'" << inches << "'\'";
    }
    bool operator<(Distance) const;
};

bool Distance::operator<(Distance d2) const
{
    float bf1 = feet + inches / 12;
    float bf2 = d2.feet + d2.inches / 12;
    return (bf1 < bf2) ? true : false;
}

int main()
{

    sampleclass c1, c2, c3, c4, c5;

    c1.ptr = &c2;
    c2.ptr = &c3;
    c3.ptr = &c4;
    c4.ptr = &c5;
    c5.ptr = nullptr;

    sampleclass *temp = &c1;
    while (temp->ptr != nullptr)
    {
        cout << temp->age;
        temp = temp->ptr;
    }

    Distance dist1;
    dist1.getdist();
    Distance dist2(6, 2.5);

    cout << "\ndist1 = ";
    dist1.showdist();
    cout << "\ndist2 = ";
    dist2.showdist();
    if (dist1 < dist2)
        cout << "\ndist1 is less than dist2";
    else
        cout << "\ndist1 is greater than (or equal to) dist2";
    cout << endl;
    return 0;
}