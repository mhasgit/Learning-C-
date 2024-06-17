#include <iostream>
using namespace std;

class Complex
{
    int real, image;
public:
    Complex(int _real = 0, int _image = 0) : real(_real), image(_image) {}


    friend Complex operator+(Complex const &, Complex const &);

    // Complex operator+(Complex obj)
    // {
    //     Complex c3;
    //     c3.real = real + obj.real;
    //     c3.image = image + obj.image;
    //     return c3;
    // }

    void print()
    {
        cout << real << " + i" << image << endl;
    }
};

Complex operator +(Complex const &c1, Complex const &c2) 
{
   Complex c3;
   c3.real = c1.real + c2.real;
   c3.image = c1.image + c2.image;
   return c3;
}

int main(void) 
{
    Complex c1(2, 4), c2(2, 5);
    Complex c3 = c1 + c2;

    c3.print();

   return 0;
}
