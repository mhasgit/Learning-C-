#include <iostream>

using namespace std;
struct node
{
    int data;
    node *next;
};

int main()
{
    int info = 0, node_Number = 0, counter = 0;
    node *head = NULL;
    int ch;
    do
    {
        cout << "--------------------" << endl;
        cout << "What do you want?" << endl;
        cout << "--------------------" << endl;
        cout << "0) Quit\n";
        cout << "1)Insert at first\n";
        cout << "---------------------------" << endl;

        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 0:
            break;
        case 1:
            cout << "Enter any number: ";
            cin >> info;
            cout << "---------------------------" << endl;

            cout << "Input data: " << info << " at Node No: " << ++counter << endl;
            cout << "Head address at the beginning: " << head << endl;

            node *temp;
            temp = (node *)malloc(sizeof(node));
            temp->data = info;
            temp->next = head;
            head = temp;

            cout << "Node data: " << temp->data << endl;
            cout << "head address after a node insertion: " << head << endl;
            cout << "Address of the current node: " << temp << endl;
            cout << "Address of the next node: " << temp->next << endl;

            cout << "------------------------------" << endl;
            cout << "Insertion at the beginning completed" << endl;
            cout << "------------------------------" << endl;
            break;
        
        }

    } while (ch != 0);

    return 0;
}
