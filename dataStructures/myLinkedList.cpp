#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

void insertInLinkedList(Node *head, int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = (head);

    (head) = newNode;
}

void insertAtLast(Node *firstNode, int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;

    if (firstNode == NULL)
    {
        firstNode = newNode;
    }
    Node *lastNode = firstNode;
    while (lastNode->next != NULL)
    {
        lastNode = lastNode->next;
        lastNode->next = newNode;
    }
    
}

void inserAtSpecificNode(Node *head, int data, int position)
{
    Node *newNode = new Node;
    newNode->data = data;
    if (position == 0)
    {
        newNode->next = head;
    }
    else
    {

    }
    
}

void traverseLinkedList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data;
        head = head->next;
    }
}

void deleteInLinkedList(Node *firstNode, int data)
{
    if (firstNode == NULL)
            {
                cout << "The linked list is empty";
            }
            else if (firstNode->next == NULL)
            {
                firstNode = NULL;
                cout << "The first node of the linked list is deleted" << endl;
                cout << "The linked list is empty" << endl;
            }
            Node *tempNode;
            tempNode = new Node;
            tempNode= firstNode;
            firstNode = tempNode->next;
            free(tempNode);
            cout << "The first node of the linked list is deleted" << endl;
}

void deleteAtLast()
{

}

void deleteAtSpecificNode()
{

}

void sortLinkedList(Node *head)
{
    Node *firstNode = new Node;

            Node *tempSecondNode = new Node;

            int temp = 0;

            for (firstNode = head; firstNode != NULL; firstNode = firstNode->next)
            {
                for (tempSecondNode = firstNode->next; tempSecondNode != NULL; tempSecondNode = tempSecondNode->next)
                {
                    if (firstNode->data > tempSecondNode->data)
                    {
                        temp = firstNode->data;
                        firstNode->data = tempSecondNode->data;
                        tempSecondNode->data = temp;
                    }
                }
            }
}


int main()
{
    
    return 0;
}
