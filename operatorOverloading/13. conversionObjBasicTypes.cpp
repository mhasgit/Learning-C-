#include <iostream>
using namespace std;

class Distance
{
private:
    const float MTF; // meters to feet
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0.0), MTF(3.280833F)
    {
    }
    Distance(float meters) : MTF(3.280833F)
    {
        float fltfeet = MTF * meters;   // convert to float feet
        feet = int(fltfeet);            // feet is integer part
        inches = 12 * (fltfeet - feet); // inches is what’s left
    }
    Distance(int ft, float in) : feet(ft), inches(in), MTF(3.280833F)
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
    operator float() const
    {                                         // converts Distance to meters
        float fracfeet = inches / 12;         // convert the inches
        fracfeet += static_cast<float>(feet); // add the feet
        return fracfeet / MTF;                // convert to meters
    }
};

int main()
{
    float mtrs;

    Distance dist1 = 2.35F; // uses 1-arg constructor to
    cout << "\ndist1 = ";
    dist1.showdist();

    mtrs = static_cast<float>(dist1); // uses conversion operator
    cout << "\ndist1 = " << mtrs << " meters\n";

    Distance dist2(5, 10.25); // uses 2-arg constructor
    mtrs = dist2;
    
    cout << "\ndist2 = " << mtrs << " meters\n"; // dist2 = mtrs; //error, = won’t convert
    
    return 0;
}