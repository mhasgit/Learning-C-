#include <iostream>
using namespace std;

class Counter
{
private:
    unsigned int count;

public:
    Counter() : count(0)
    {
    }
    Counter(int c) : count(c)
    {
    }
    unsigned int get_count()
    {
        return count;
    }
    Counter operator++()
    {
        return Counter(++count);
    }
    Counter operator++(int)
    {
        return Counter(count++);
    }
};

int main()
{
    Counter c1, c2, c3;
    cout << "\nc1 = " << c1.get_count();
    cout << "\nc2 = " << c2.get_count();

    ++c1;
    c2 = ++c1;

    cout << "\nc1 = " << c1.get_count();
    cout << "\nc2 = " << c2.get_count() << endl;

    c2 = c1++; // c1=3, c2=2 (postfix)

    cout << "\nc1 =" << c1.get_count();
    cout << "\nc2 =" << c2.get_count() << endl;
    return 0;
}