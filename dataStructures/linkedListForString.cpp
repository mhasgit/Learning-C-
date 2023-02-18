#include <iostream>

using namespace std;
struct node
{
    char data;
    node *next;
};

int main()
{
    char info;
    int node_Number = 0, counter = 0;
    node *head = NULL;
    int ch;
    do
    {
        cout << "--------------------" << endl;
        cout << "What do you want?" << endl;
        cout << "--------------------" << endl;
        cout << "0) Quit\n";
        cout << "1)Insert at first\n";
        cout << "2)Traverse\n";
        cout << "3)Sort nodes\n";
        cout << "---------------------------" << endl;

        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 0:
            break;
        case 1:
        {
            cout << "Enter any character: ";
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

        case 2:
        {

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
        case 3:
        {
            cout << "----------------" << endl;
            cout << "7)Sort nodes\n";
            cout << "----------------" << endl;

            node *temp1;
            temp1 = (node *)malloc(sizeof(node));

            node *temp2;
            temp2 = (node *)malloc(sizeof(node));

            char temp;

            for (temp1 = head; temp1 != NULL; temp1 = temp1->next)
            {
                for (temp2 = temp1->next; temp2 != NULL; temp2 = temp2->next)
                {
                    if (temp1->data > temp2->data)
                    {
                        temp = temp1->data;
                        temp1->data = temp2->data;
                        temp2->data = temp;
                    }
                }
            }
        }
        }

    } while (ch != 0);
    system("Pause");

    return 0;
}
