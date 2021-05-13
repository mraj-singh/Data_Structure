#include<iostream>
using namespace std;
#include<stack>

void insert(stack<int> &st,int temp)
{
    if (st.empty()){
        st.push(temp);
    } 
    else{
        int temp1 = st.top();
        st.pop();
        insert(st,temp);
        st.push(temp1);
    }
}
void reverse(stack<int> &st)
{
    if(st.empty()){
        return;
    }
    int temp = st.top();
    st.pop();
    reverse(st);
    insert(st,temp);
}
int main()
{
    stack<int> st;
    st.push(100);
    st.push(110);
    st.push(120);
    st.push(130);
    
    reverse(st);
    cout<<"Reversed Stack:"<<endl;
    while (!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
}