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
        cout << "1) Delete at first node\n";
        cout << "---------------------------" << endl;

        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 0:
            break;
        case 1:
        
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
            node *temp;
            temp = (node *)malloc(sizeof(node));
            temp = head;
            head = temp->next;
            free(temp);
            cout << "The first node of the linked list is deleted" << endl;
            counter--;
            break;
        
        }

    } while (ch != 0);

    return 0;
}
