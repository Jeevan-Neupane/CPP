#include<iostream>
using namespace std;
#include<queue>
#include<stack>


int main(){

    queue<int> que;
    stack<int> st;

    que.push(10);
    que.push(20);
    que.push(30);
    que.push(40);
    que.push(50);

    while(!que.empty()){
        st.push(que.front());
        que.pop();
    }
    while(!st.empty()){
      que.push(st.top());
      st.pop();
    }

    while(!que.empty()){
        cout<<que.front()<<endl;
        que.pop();
    }



    



    return 0;
}