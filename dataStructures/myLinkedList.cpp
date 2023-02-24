#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

void insertInLinkedList(Node **head, int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = (*head);

    (*head) = newNode;
}

void insertAtLast(Node **head, int data)
{
    if ((*head) == NULL)
    {
        Node *temp = new Node();
        temp->data = data;
        temp->next = NULL;
        (*head) = temp;
    }
    else
    {
        Node *temp1 = new Node();
        temp1 = (*head);
        while (temp1->next != NULL)
        {
            temp1 = temp1->next;
        }

        Node *temp = new Node();
        temp->data = data;
        temp->next = NULL;
        temp1->next = temp;
    }
}

void inserAtSpecificNode(Node *head, int data, int position)
{
    Node *newNode = new Node();
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
        cout << head->data << " ";
        head = head->next;
    }
}

void deleteInLinkedList(Node *head)
{
    if (head == NULL)
    {
        cout << "The linked list is empty";
    }
    else if (head->next == NULL)
    {
        head = NULL;
        cout << "The first node of the linked list is deleted" << endl;
        cout << "The linked list is empty" << endl;
    }
    Node *tempNode = new Node();
    tempNode = head->next;
    //head = tempNode->next;
    head->next = tempNode->next;
    delete tempNode;
    //free(tempNode);
    cout << "The first node of the linked list is deleted" << endl;
}

void deleteAtLast(Node *head)
{
    if (head == NULL)
    {
        cout << "The linked list is empty";
    }
    else if (head->next == NULL)
    {
        head = NULL;
        cout << "The last node of the linked list is deleted" << endl;
        cout << "The linked list is empty" << endl;
    }

    Node *temp1 = new Node();
    temp1 = head;

    Node *oldTemp = new Node();
    while (temp1->next != NULL)
    {
        oldTemp = temp1;
        temp1 = temp1->next;
    }
    oldTemp->next = NULL;

    free(temp1);
    cout << "The last node of the linked list is deleted" << endl;
}

void deleteAtSpecificNode(Node *head)
{
    int nodeNumber, counter;
    if (head == NULL)
    {
        cout << "The linked list is empty";
    }
    else if (head->next == NULL)
    {
        head = NULL;
        cout << "The first node of the linked list is deleted" << endl;
        cout << "The linked list is empty" << endl;
    }
    cout << "Enter any node number: ";
    cin >> nodeNumber;
    if (nodeNumber > counter)
    {
        cout << "No such node exist";
    }

    Node *temp1 = new Node();
    temp1 = head;

    Node *oldTemp = new Node();
    oldTemp = temp1;
    if (nodeNumber == 1)
    {
        head = temp1->next;
        free(temp1);
        counter--;
        cout << nodeNumber << "Node of the linked list is deleted" << endl;
    }
}

void sortLinkedList(Node *head)
{
    Node *firstNode = new Node();

    Node *tempSecondNode = new Node();

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
    Node *newNode = NULL;

    insertInLinkedList(&newNode, 10);
    insertInLinkedList(&newNode, 20);
    insertInLinkedList(&newNode, 30);
    insertInLinkedList(&newNode, 40);
    insertInLinkedList(&newNode, 50);
    insertInLinkedList(&newNode, 60);
    traverseLinkedList(newNode);

    cout << "\n\n";
    insertAtLast(&newNode, 70);
    traverseLinkedList(newNode);

    cout << "\n\n";
    sortLinkedList(newNode);
    traverseLinkedList(newNode);

    cout << "\n\n";
    deleteInLinkedList(newNode);
    traverseLinkedList(newNode);
    return 0;
}
