#include<iostream>
using namespace std;

class stackarray
{
    int *data;
    int nextindex;
    int capacity;

public:
    stackarray(){
        data= new int[5];
        nextindex=0;
        capacity=5;
    }
int size(){
    return nextindex;
}
bool isEmpty(){
    return nextindex==0;
}
void push(int element){
    if(nextindex==capacity){
        int *newdata = new int[2*capacity];
        for(int i=0;i<capacity;i++){
            newdata[i] = data[i];
        }
        capacity *= 2;
        delete []data;
        data = newdata;
    }
    data[nextindex]= element;
    nextindex++;
}
int pop(){
    if(isEmpty()){
        cout<<"stack is empty";
    }
    nextindex--;
    return data[nextindex];
}
int top(){
    if(isEmpty()){
        cout<<"stack is empty";
    }
    return data[nextindex-1];
}
};
int main()
{
    stackarray s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout<<"Top Element is: "<<s.top()<<endl;
    cout<<"Removed 1st element: "<<s.pop()<<endl;
    cout<<"Removed 2nd element: "<<s.pop()<<endl;
    cout<<"Size of Element is: "<<s.size()<<endl;
    cout<<"Is Stack Empty?: "<<s.isEmpty()<<endl;
}