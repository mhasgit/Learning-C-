#include <iostream>

using namespace std;

class Parent
{
};

class Child : public Parent
{
};

class GrandChild : public Child
{
};




int main(int argc, char const *argv[])
{


    GrandChild* gc = new GrandChild;

    // Up cast
    Child* c = dynamic_cast<Child*>(gc);
    Parent* p = dynamic_cast<Parent*>(gc);


    void* vp = dynamic_cast<Child*>(gc);
    vp = dynamic_cast<Parent*>(gc);


    int i = 100;
    void* vp1 = &i;
    int* ip = reinterpret_cast<int*>(vp1);

    double d = 200.0;
    vp1 = &d;
    double* dp = reinterpret_cast<double*>(vp1);

    char ch = 'c'; 
    vp1 = &ch;
    char* cp = reinterpret_cast<char*>(vp1);

    return 0;
}
