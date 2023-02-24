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
        cout << "1) Insert at first\n";
        cout << "2) Traverse\n";
        cout << "3) Insert at last\n";
        cout << "4) Insert after specific number of node\n";
        cout << "5) Delete at first node\n";
        cout << "6) Delete at last node\n";
        cout << "7) Delete specific number of node\n";
        cout << "8) Sort nodes\n";
        cout << "---------------------------" << endl;

        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 0:
            break;
        case 1:
        {
            cout << "Enter any number: ";
            cin >> info;
            cout << "---------------------------" << endl;

            cout << "Input data: " << info << " at Node No: " << ++counter << endl;
            cout << "Head address at the beginning: " << head << endl;

            //node *temp;
            //temp = (node *)malloc(sizeof(node));
            node *temp = new node;
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
            cout << "3. Insert at last\n";
            cout << "----------------" << endl;
            // Check link list is empty

            if (head == NULL)
            {
                cout << "Enter any number: ";
                cin >> info;
                cout << "Input data: " << info << endl;

                node *temp;
                temp = new node;
                temp->data = info;
                temp->next = NULL;
                head = temp;
                counter++;
                break;
            }
            else
            {
                cout << "Enter any number: ";
                cin >> info;
                cout << "Input data: " << info << endl;

                node *temp1;
                temp1 = (node *)malloc(sizeof(node));
                temp1 = head;
                while (temp1->next != NULL)
                {
                    temp1 = temp1->next;
                }

                node *temp;
                temp = (node *)malloc(sizeof(node));
                temp->data = info;
                temp->next = NULL;
                temp1->next = temp;
                break;
            }
        }
        case 4:
        {
            cout << "-----------------------------------------" << endl;
            cout << "4. Insert after specific number of node\n";
            cout << "-----------------------------------------" << endl;
            // Check link list is empty

            if (head == NULL)
            {
                cout << "The linked list is empty" << endl;
                break;
            }
            cout << "Enter any number: ";
            cin >> info;
            cout << "Input data: " << info << endl;
            cout << "Enter the node number: ";
            cin >> node_Number;

            node *temp1;
            temp1 = (node *)malloc(sizeof(node));
            temp1 = head;
            for (int i = 0; i < node_Number; i++)
            {
                temp1 = temp1->next;
                if (temp1 == NULL)
                {
                    cout << node_Number << "Node does'nt exist" << endl;
                    break;
                }
            }

            node *temp;
            temp = (node *)malloc(sizeof(node));
            temp->data = info;
            temp->next = temp1->next;
            temp1->next = temp;
            counter++;
            break;
        }
        case 5:
        {
            cout << "-------------------------" << endl;
            cout << "5. Delete at first node\n";
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
            node *temp = new node();
            temp = head;
            head = temp->next;
            free(temp);
            cout << "The first node of the linked list is deleted" << endl;
            counter--;
            break;
        }
        case 6:
        {
            cout << "-------------------------" << endl;
            cout << "6. Delete at last node\n";
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
                cout << "The last node of the linked list is deleted" << endl;
                cout << "The linked list is empty" << endl;
                counter--;
                break;
            }
            node *temp1;
            temp1 = (node *)malloc(sizeof(node));
            temp1 = head;

            node *oldTemp;
            oldTemp = (node *)malloc(sizeof(node));
            while (temp1->next != NULL)
            {
                oldTemp = temp1;
                temp1 = temp1->next;
            }
            oldTemp->next = NULL;

            free(temp1);
            cout << "The last node of the linked list is deleted" << endl;
            counter--;
            break;
        }

        case 7:
        {
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
        case 8:
        {
            cout << "----------------" << endl;
            cout << "7. Sort nodes\n";
            cout << "----------------" << endl;

            node *temp1;
            temp1 = (node *)malloc(sizeof(node));

            node *temp2;
            temp2 = (node *)malloc(sizeof(node));

            int temp = 0;

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

    return 0;
}
