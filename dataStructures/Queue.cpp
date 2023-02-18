#include <iostream>

using namespace std;

int Queue[5];
int front = -1, rear = -1, N = 5;

void insertQ(int value)
{
    if ((front == 0 && rear == N - 1) || (front == rear + 1))
    {
        cout << "Queue overflow \n";
        return;
    }

    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else 
    {
        if(rear == N -1)
        {
            rear = 0;
        }
        else
        {
            rear = rear + 1;
        }
    }

    Queue[rear] = value;
}

void deleteQ()
{
    if (front == -1)
    {
        cout << "Queue underflow\n";
        return;
    }

    cout << "Element deleted from Queue is: " << Queue[front] << endl;

    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        if(front == N -1)
        {
            front = 0;
        }
        else
        {
            front = front + 1;
        }
        
    }
    
}

void DisplayQ()
{
    int f = front, r = rear;

    if (front == -1)
    {
        cout << "Queue is empty" << endl;
        return;
    }

    cout << "Queue elements are:\n";
    if (f <= r)
    {
        while (f <= r)
        {
            cout << Queue[f] << " ";
            f++;
        }
        
    }
    else
    {
        while (f <= N - 1)
        {
            cout << Queue[f] << " ";
            f++;
        }
        f = 0;
        while (f <= r)
        {
            cout << Queue[f] << " ";
            f++;
        }
        
    }
    cout << endl;    
}

int main()
{
    int choice, value;
    cout << "1) Insert\n";
    cout << "1) Delete\n";
    cout << "1) Display\n";
    cout << "1) Exit\n";

    do
    {
        cout << "Enter Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Input To Insert: ";
            cin >> value;
            insertQ(value);
            break;
        case 2:
            deleteQ();
            break;
        case 3:
            DisplayQ();
            break;
        case 4:
            exit(1);
            break;
        
        default:
            cout << "Wrong!!!....Try again";
            break;
        }
    } while (true);
    

    return 0;
}
