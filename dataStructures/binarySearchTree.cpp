#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *leftSide, *rightSide;
};

Node* createNode(int data)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->leftSide = NULL;
    newNode->rightSide = NULL;

    return newNode;
}

Node* insertIntoTree(Node* root, int data)
{
    Node* temp = createNode(data);
    Node *temp1 = new Node();
    temp1 = root;

    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        while (temp1 != NULL)
        {
            if (temp1->data < data)
            {
                if (temp1->rightSide == NULL)
                {

                    temp1->rightSide = temp;
                    break;
                }
                temp1 = temp1->rightSide;
            }
            else if (temp1->data > data)
            {
                if (temp1->leftSide == NULL)
                {
                    temp1->leftSide = temp;
                    break;
                }
                temp1 = temp1->leftSide;
            }
            
            
        }
        
    }
    return root;
}

void search(Node* root, int data)
{
    int depth = 0;
    Node *temp = new Node();
    temp = root;

    while (temp != NULL)
    {
        depth++;
        if (temp->data == data)
        {
            cout << "\nData found at depth: " << depth;
            return;
        }
        else if (temp->data > data)
        {
            temp = temp->leftSide;
        }
        else
        {
            temp = temp->rightSide;
        }
        cout << "\n Data not found";
        return;   
    }
    
}

int main()
{
    char ch;
    int n, arr[20] = {45, 56, 77, 47, 88, 98, 18, 27, 35, 81, 35, 67, 32, 95, 100};

    Node* root = new Node();
    root = NULL;

    for (int i = 0; i < 15; i++)
    {
        root = insertIntoTree(root, arr[i]);
    }
    up:
    search(root, n);
    cout << "\nEnter the element to be searched: ";
    cin >> n;

    search(root, n);

    
    cout << "\n\n\tDo you want to search more\n\tEnter choice(y/n)?";
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
    {
        goto up;
    }
    return 0;
}
