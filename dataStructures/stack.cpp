#include <iostream>

using namespace std;

int stack[10], MAXSIZE = 10, top = -1;

void push(int value)
{
    if (top >= MAXSIZE - 1)
    {
        cout << "Stack overflow" << endl;
    }
    else
    {
        top++;
        stack[top] = value;
    }
}

void pop()
{
    if (top <= -1)
    {
        cout << "Stack underflow";
    }
    else
    {
        cout << "The pop element is: " << stack[top] << endl;
        top--;
    }
    
    
}

void Display()
{
    if (top >= 0)
    {
        cout << "Stack elements are: ";
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "Stack is empty";
    }    
}

int main()
{
    int choice, value;
    cout << "1) Push in stack" << endl;
    cout << "2) Display stack" << endl;
    cout << "3) Pop from stack" << endl;
    cout << "4) Exit" << endl;

    do
    {
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to be pushed: ";
            cin >> value;
            push(value);
            break;
        case 2:
            Display();
            break;
        case 3:
            pop();
            break;
        case 4:
            exit(1);
            break;
        default:
            cout << "Wrong!!!...Input again" << endl;
            break;
        }
    } while (true);
    
    return 0;
}