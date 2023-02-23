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

int findMax(struct Node* head)
{
    int max = 0;

    while (head != NULL)
    {
        if (max < head->data)
            max = head->data;

        head = head->next;  
    }
    return max;
}

float findAvg(struct Node* head)
{
    if (!head)
    {
        return -1;
    }
    int count = 0;
    int sum = 0;
    float avg = 0.0;
    struct Node* current = head;
    while (current != NULL)
    {
        count++;
        sum += current->data;
        current = current->next;
    }
    
    avg = (double)sum / count;

    return avg;
}

int main()
{
    struct Node *head = NULL;

    insert(&head, 15);
    insert(&head, 14);
    insert(&head, 13);
    insert(&head, 12);
    insert(&head, 11);
    insert(&head, 10);

    cout << "The linked list is: " << " ";
    Traverse(head);

    cout << "\n";

    cout << "Maximum element in the linked list is: ";
    cout << findMax(head) << endl;

    cout << "Average of Nodes in Linked List: ";
    cout << findAvg(head);
    return 0;
}
