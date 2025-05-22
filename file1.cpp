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

     