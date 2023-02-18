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
        cout << "1)Traverse\n";
        cout << "---------------------------" << endl;

        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 0:
            break;
        case 1:
        

            node *temp1;
            temp1 = head;

            cout << "-------------------------" << endl;
            cout << "Traverse a link list elements\n"
                 << endl;
            cout << "-------------------------" << endl;
            if (temp1 == NULL)
            {
                cout << endl
                     << "The linked list is empty" << endl;
            }
            else
            {
                cout << "Elemets of the linked list: ";
                while (temp1 != NULL)
                {
                    cout << temp1->data;
                    temp1 = temp1->next;
                    cout << " ";
                }
                cout << endl
                     << "Total number of nodes: " << counter++;
                break;
            }
        }

    } while (ch != 0);

    return 0;
}
