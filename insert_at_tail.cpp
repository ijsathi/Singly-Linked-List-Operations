#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

// insert at tail
void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        cout << endl
             << "Inserted at head" << endl
             << endl;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // tmp ekhon last node e
    temp->next = newNode;
    cout << endl
         << "Inserted at tail" << endl
         << endl;
}

// print
void print_liked_list(Node *head)
{
    cout << "Your Linked List: ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insert_any_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout << endl
         << endl
         << "Inserted at position " << pos << endl
         << endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Insert at any Position" << endl;
        cout << "Option 4: Tarminate" << endl;
        int option;
        cin >> option;
        if (option == 1)
        {
            cout << "Please Enter your Value: ";
            int val;
            cin >> val;
            insert_at_tail(head, val);
        }
        else if (option == 2)
        {
            print_liked_list(head);
        }
        else if (option == 3)
        {
            int position, val;
            cout << "Enter Position: ";
            cin >> position;
            cout << "Enter Value: ";
            cin >> val;
            insert_any_position(head, position, val);
        }
        else if (option == 4)
        {
            break;
        }
    }

    return 0;
}