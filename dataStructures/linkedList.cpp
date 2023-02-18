#include <iostream>

using namespace std;
struct node
{
    int data;
    node *next;
};

int main()
{
    node *head = NULL;
    int info = 0, node_Number = 0, counter = 0;

    cout << "--------------------------" << endl;
    cout << "1. Insert at first\n";
    cout << "--------------------------" << endl;

    cout << "Enter any number: ";
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
    return 0;
}
