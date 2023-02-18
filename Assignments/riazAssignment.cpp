#include <iostream>

using namespace std;
struct node
{
    int data;
    node *next;
};

int main()
{
    int info = 0;
    node *firstHead = NULL;
    node *secondHead = NULL;
    int ch;
    do
    {
        cout << "--------------------" << endl;
        cout << "What do you want?" << endl;
        cout << "--------------------" << endl;
        cout << "0) Quit\n";
        cout << "1)Insert in first Linked List\n";
        cout << "2)Insert in second Linked List\n";
        cout << "3)Traverse first linked list\n";
        cout << "4)Traverse second linked list\n";
        cout << "5)Merge both linked list\n";
        cout << "6) Sort Linked list nodes\n";
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

            node *firstLinkedList;
            firstLinkedList = (node *)malloc(sizeof(node));
            firstLinkedList->data = info;
            firstLinkedList->next = firstHead;
            firstHead = firstLinkedList;
            break;
        }

        case 2:
        {
            cout << "Enter any number: ";
            cin >> info;
            cout << "---------------------------" << endl;

            node *secondLinkedList;
            secondLinkedList = (node *)malloc(sizeof(node));
            secondLinkedList->data = info;
            secondLinkedList->next = secondHead;
            secondHead = secondLinkedList;
            break;
        }
        case 3:
        {

            node *firstLinkedList;
            firstLinkedList = firstHead;

            cout << "-------------------------" << endl;
            cout << "First linked list elements: \n"
                 << endl;
            cout << "-------------------------" << endl;
            if (firstLinkedList == NULL)
            {
                cout << endl
                     << "The linked list is empty" << endl;
            } 
            else
            {
                cout << "Elemets of the first linked list: ";
                while (firstLinkedList != NULL)
                {
                    cout << firstLinkedList->data;
                    firstLinkedList = firstLinkedList->next;
                    cout << " ";
                }
                cout << endl;
                break;
            }
        }
        case 4:
        {
            node *secondLinkedList;
            secondLinkedList = secondHead;

            cout << "-------------------------" << endl;
            cout << "second linked list elements: \n"
                 << endl;
            cout << "-------------------------" << endl;
            if (secondLinkedList == NULL)
            {
                cout << endl
                     << "The linked list is empty" << endl;
            }
            else
            {
                cout << "Elemets of the second linked list: ";
                while (secondLinkedList != NULL)
                {
                    cout << secondLinkedList->data;
                    secondLinkedList = secondLinkedList->next;
                    cout << " ";
                }
                cout << endl;
                break;
            }
        }

        case 5:
        {
            node* firstRef = firstHead;
            while (firstRef->next != NULL)
            {
                firstRef = firstRef->next;
            }
            firstRef->next = secondHead->next;
            cout << "Merge successful" << endl;
            break;
        }
        case 6:
        {
            cout << "----------------" << endl;
            cout << "6.Sort nodes\n";
            cout << "----------------" << endl;

            node *temp1;
            temp1 = (node *)malloc(sizeof(node));

            node *temp2;
            temp2 = (node *)malloc(sizeof(node));

            int temp = 0;

            for (temp1 = firstHead; temp1 != NULL; temp1 = temp1->next)
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
