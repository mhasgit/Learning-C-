#include <iostream>

int main(int argc, char const *argv[])
{
    int f[1024 * 500];
    int *p = new int[2];

    p[2048] = 100;

    while (true)
    {
        p = new int[2];
        delete [] p;
    }

    return 0;
}
