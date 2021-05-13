#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data){
        this->data= data;
        next=NULL;
    }
};
class stackll
{
    Node *head;
    int size;
public:
    stackll(){
        head= NULL;
        size=0;
    }
    int getsize(){
        return size;
    }
    bool isEmpty(){
        return size==0;
    }
    void push(int element){
        Node *newNode= new Node(element);
        newNode->next= head;
        head= newNode;
        size++;
    }
    int pop(){
        if(isEmpty()){
            return 0;
        }
        int ans= head->data;
        Node *temp= head;
        head= head->next;
        delete temp;
        size--;
        return ans;

    }
    int top(){
        if(isEmpty()){
            return 0;
        }
        return head->data;
    }
};
int main()
{
    stackll s;
    s.push(100);
    s.push(200);
    s.push(300);
    s.push(400);
    s.push(500);

    cout<<"Size of Element is: "<<s.getsize()<<endl;
    cout<<"Top Element is: "<<s.top()<<endl;
    cout<<"Removed 1st element: "<<s.pop()<<endl;
    cout<<"Removed 2nd element: "<<s.pop()<<endl;
    cout<<"Size of Element is: "<<s.getsize()<<endl;
    cout<<"Is Stack Empty?: "<<s.isEmpty()<<endl;
}