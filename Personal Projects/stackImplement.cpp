#include <iostream>

using namespace std;

struct stackNode{
    int data;
    stackNode* next;
};

struct Stack{
    stackNode* top;


    //constructor
    Stack(): top(nullptr){}

    void push(int value){
        stackNode* newNode = new stackNode;
        newNode->data = value;
        newNode ->next = top;
        top = newNode;

    }

    bool isEmpty(){
        return top == nullptr;
    }

    int pop(){
        if(isEmpty()){
            cout << "Is Empty" << endl;
            return  -1;
        }else{
            int value = top->data;
            stackNode* temp = top;
            top = top->next;
            delete temp;
            return value;
        }
    }
};

int main(){
    Stack s;

    s.push(10);
    s.push(20);
    s.push(3);

    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
}