#include <iostream>

using namespace std;
struct Node
{
    int data;
    Node *next;
};

void insert(struct Node **head, int data)
{
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = (*head);
    
    (*head) = newNode;
}

void Traverse(struct Node* head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

void merge(Node* first, Node** second)
{
    Node* firstRef = first;

    while (firstRef->next != NULL)
    {
        firstRef = firstRef->next;
    }

    firstRef->next = *second;
    
}

void sort(Node* head)
{
    Node *firstNode;
            firstNode = (Node *)malloc(sizeof(Node));

            Node *secondNode;
            secondNode = (Node *)malloc(sizeof(Node));

            int temp = 0;

            for (firstNode = head; firstNode != NULL; firstNode = firstNode->next)
            {
                for (secondNode = firstNode->next; secondNode != NULL; secondNode = secondNode->next)
                {
                    if (firstNode->data > secondNode->data)
                    {
                        temp = firstNode->data;
                        firstNode->data = secondNode->data;
                        secondNode->data = temp;
                    }
                }
            }
}

int main()
{
    struct Node *fisrtHead = NULL;
    struct Node *secondHead = NULL;


    insert(&fisrtHead, 0);
    insert(&fisrtHead, 1);
    insert(&fisrtHead, 2);
    insert(&fisrtHead, 3);
    insert(&fisrtHead, 4);

    cout << "The first linked list is:  " << " ";
    Traverse(fisrtHead);

    cout << "\n";

    insert(&secondHead, 5);
    insert(&secondHead, 6);
    insert(&secondHead, 7);
    insert(&secondHead, 8);
    insert(&secondHead, 9);
    insert(&secondHead, 10);

    cout << "The second linked list is: " << " ";
    Traverse(secondHead);

    cout << "\n";

    merge(fisrtHead, &secondHead);
    cout << "After merging both Linked Lists:  ";
    Traverse(fisrtHead);

    cout << "\n";

    sort(fisrtHead);
    cout << "Linked List after sorting is:  ";
    Traverse(fisrtHead);


    return 0;
}
