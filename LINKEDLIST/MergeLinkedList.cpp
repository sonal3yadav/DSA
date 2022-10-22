// C++ program to merge two linked list
#include <bits/stdc++.h> 
using namespace std; 
  
// defining a node for link list
class Node  
{  
    public: 
        int data;  
        Node *next;  
};  
void insert(Node **, int);   // Function to insert element in linklist
void Print(Node *);      // function to print a singly linked list 
void merge(Node *, Node **); // // The main function to merge two link 
  
//main function  
int main()  
{     // creating null node 
    Node *first = NULL, *second = NULL;
    //inserting 1, 2 and 3 in first linked list  
    insert(&first, 5);  
    insert(&first, 4);  
    insert(&first, 3); 
    insert(&first, 2);  
    insert(&first, 1);  
    cout<<"First Linked List:\n";  
    Print(first);  
  
    //inserting 4, 5, 6, 7, 8 in second linked list
    insert(&second, 10);  
    insert(&second, 9);  
    insert(&second, 8);  
    insert(&second, 7);  
    insert(&second, 6);  
    cout<<"\nSecond Linked List:\n";  
    Print(second);  
  
    merge(first, &second);  
  
    //firstrinting merged linked list
    cout<<"\nMerged list is: ";  
    Print(first);  
  
    return 0;  
}  
// Function to insert element in linklist 
void insert(Node ** head_ref, int new_data)  
{  
    Node* new_node = new Node(); 
    new_node->data = new_data;  
    new_node->next = (*head_ref);  
    (*head_ref) = new_node;  
}  
  
//function to print a singly linked list 
void Print(Node *head)  
{  
    Node *temp = head;  
    while (temp != NULL)  
    {  
        cout<<temp->data<<" ";  
        temp = temp->next;  
    }  
    cout<<endl; 
}  
  
// The main function to merge two link list  
void merge(Node *first, Node **second)  
{  
    Node *firstRef = first;  
  
    // finding the lat node of first linked list  
    while (firstRef->next != NULL)  
    {  
         firstRef = firstRef->next;
    }  
   
    firstRef->next = *second;
}