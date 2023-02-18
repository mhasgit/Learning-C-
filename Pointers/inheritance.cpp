#include <iostream>
#include <cstring>

using namespace std;

class Base
{
public:
    virtual void print()
    {
        cout << "Base Class";
    }
};

class Child : public Base
{
private:
    char *name;

public:
    Child() {}
    Child(char name[])
    {
        int len = strlen(name);
        name = new char[len + 1];
    }

    ~Child()
    {
        delete name;
    }

    void print()
    {
        cout << "Child Class";
    }
};

int main(int argc, char const *argv[])
{
    Child ch;
    Base *b = &ch;

    Base *c = new Child("");

    Child *child = dynamic_cast<Child *>(c);

    child->print();

    delete c;
    return 0;
}
