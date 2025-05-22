#include <iostream>

using namespace std;

//Node class representing a single node in the linked list
class Node{
    public:
    int data;
    Node* next;

    Node(){
        next = NULL;
    }
};

//Stack Class
class Stack{
    private:
    Node* top; // Pointer to the top node of the stack

    public:
    Stack(){
        top = NULL; // Initialize the stack with a null top pointer
    }

    // Push operation insert an element into to the top of the stack
    int push(int value) {

        Node* newNode = new Node(); // 1. Allocate memory for the new Node 
        newNode->data = value; // 2. assign value
        newNode->next = top; // 3. Set the next pointer of the new node to the current top
        top = newNode; // 4.Update the top pointer to the new node
        cout << "Push Value: " << value << endl;
         return value;
    }    

    // Pop operation remove to the topmost element from the stack
    void pop(){
        if (isEmpty()){
            cout << "Stack is empty." << endl;
        }

        Node *temp = top; // Create a temporary pointer to teh top node
        top = top->next; // Update teh top pointer to the next node
        cout << "Poped Value: " << top->data << endl;
    }

//  Peek/Top operation retrive the value of the topmost element without removing
void peek()
{
    if (top == NULL)
    {
        cout << "List is empty: " << endl;
    }
    else
    {
        Node *current = top;
        while (current != NULL)
        {
            cout << current->data << " " << endl;
            current = current->next; 
        }
        cout << endl;
    } // Return the value of the top node
}

// isEmpty opertion: Check if the stack is empty
bool isEmpty()
{
    return top == NULL; // Return true if the top pointer is NULL; Indicating an
}

};

int main()
{
    Stack Stack;

    int choice = 0;
    int value;

    while (choice != 5)
    {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter your Choice";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the value to push";
            cin >> value;
            Stack.push(value); // Push the  entered value onto the stack
            break;
      