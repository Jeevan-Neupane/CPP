#include <iostream>
#include <stack>
using namespace std;
class MinStack
{

public:
    stack<int> st;
    int min;

    MinStack()
    {
        min = INT32_MAX;
    }
    void push(int value)
    {
        if (st.empty())
        {
            min = value;
            st.push(value);
        }else{
            st.push(value-min);
            if(min>value){
                min=value;
            }
        }
    }

    void pop()
    {
        if(!st.empty()){
            if(st.top()>=0){
                st.pop();
            }else{
                min=min-st.top();
                st.top();
            }
        }
    }
    int top()
    {
        if(st.size()==1){
            return st.top();
        }else if(st.top()<0){
            return min;
        }else{
            return min+st.top();
        }
    }
    int getMin()
    {
        return min;
    }
};

int main()
{
    MinStack st;
    st.push(10);
    st.push(5);
    st.push(6);
    st.push(12);
    
    cout<<st.getMin()<<endl;
    cout<<st.top()<<endl;


    return 0;
}
