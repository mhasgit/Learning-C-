#include <iostream>
using namespace std;

class gamma
{
private:
    static int total; // total objects of this class
    // (declaration only)
    int id; // ID number of this object
public:
    gamma() // no-argument constructor
    {
        total++;    // add another object
        id = total; // id equals current total
    }
    ~gamma() // destructor
    {
        total--;
        cout << "Destroying ID number " << id << endl;
    }
    static void showtotal() // static function
    {
        cout << "Total is " << total << endl;
    }
    void showid() // non-static function
    {
        cout << "ID number is " << id << endl;
    }

    friend istream &operator>>(istream &in, gamma &g);
    friend ostream &operator<<(ostream &out, gamma &g);
};
//--------------------------------------------------------------
int gamma::total = 0; // definition of total
                      ////////////////////////////////////////////////////////////////

ostream &operator<<(ostream &out, gamma &g)
{
    cout << g.id;
    return out;
}

istream &operator>>(istream &in, gamma &g)
{
    cin >> g.id;
    return in;
}

int main()
{
    gamma g1;

    std::cout << g1 << endl;

    g1 = g1;

    g1.showid();

    gamma::showtotal();
    gamma g2, g3;
    gamma::showtotal();
    g1.showid();
    g2.showid();
    g3.showid();
    cout << "-- -- -- -- --end of program-- -- -- -- --\n";
    return 0;
}