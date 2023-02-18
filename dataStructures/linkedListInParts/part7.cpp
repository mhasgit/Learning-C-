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
        cout << "1) Delete specific number of node\n";
        cout << "---------------------------" << endl;

        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 0:
            break;
        case 1:
        
            cout << "-------------------------" << endl;
            cout << "7. Delete specific number of node\n";
            cout << "--------------------------" << endl;
            // Check link list is empty

            if (head == NULL)
            {
                cout << "The linked list is empty";
                break;
            }
            else if (head->next == NULL)
            {
                head = NULL;
                cout << "The first node of the linked list is deleted" << endl;
                cout << "The linked list is empty" << endl;
                counter--;
                break;
            }

            cout << "Enter any node number: ";
            cin >> node_Number;
            if (node_Number > counter)
            {
                cout << "No such node exist";
                break;
            }

            node *temp1;
            temp1 = (node *)malloc(sizeof(node));
            temp1 = head;

            node *oldTemp;
            oldTemp = (node *)malloc(sizeof(node));
            oldTemp = temp1;
            if (node_Number == 1)
            {
                head = temp1->next;
                free(temp1);
                counter--;
                cout << node_Number << "Node of the linked list is deleted" << endl;
                break;
            }

            for (int i = 0; i < node_Number; i++)
            {
                oldTemp = temp1;
                temp1 = temp1->next;
            }

            oldTemp->next = temp1->next;
            free(temp1);

            counter--;
            cout << node_Number << "Node of the linked list deleted" << endl;
            break;
        
        }

    } while (ch != 0);

    return 0;
}
