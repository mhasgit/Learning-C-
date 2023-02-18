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
        cout << "1s) Insert at last\n";
        cout << "---------------------------" << endl;

        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 0:
            break;
        case 1:
        
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
                temp = (node *)malloc(sizeof(node));
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

    } while (ch != 0);

    return 0;
}
