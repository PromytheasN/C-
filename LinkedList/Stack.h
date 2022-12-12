#ifndef STK
#define STK 
#include <iostream>
using namespace std;


//Create a template T class
template<typename T>
class Stack{
    //public atributes 
    public:
        stack();
        T peek();
        bool isEmpty();
        T pop();
        void push(T data);
    
    //private atributes and state
    private:
        struct Node{
            T data; 
            Node* next; //Type node pointer
        };
        Node* top; // Node pointer in class scope pointing top Struct Node;
};

//Constructor
template<typename T>
Stack<T>::stack(){
    top = nullptr;
}
//Return Linked list is empty
template<typename T>
bool Stack<T>::isEmpty(){
    return !top; //or return == top;
}

//Return data of top struct node
template<typename T>
T Stack<T>::peek(){
    if(isEmpty()){
        cerr << "Stuck is empty" << endl;
        exit(1);
    }
    return top->data; //Return data of struct node 
}

template<typename T>
T Stack<T>::pop(){
    T data = peek(); //Store data of top node;
    Node* toDelete = top; // Assign top node pointer to a node pointer to delete from dynamic memory
    top = top->next; // Assign next node pointer as top
    delete toDelete;
    return data; // return data from deleted top node;

}




#endif
