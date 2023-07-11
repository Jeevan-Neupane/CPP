#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> nse(vector<int> &vec)
{

    int size = vec.size();
    vector<int> ans(size, size);
    stack<int> st;
    st.push(0);

    for (int i = 0; i < size; i++)
    {
        while (!st.empty() && vec[i] > vec[vec[st.top()]])
        {

            
        }
        st.push(i);
    }
}

vector<int> pse(vector<int> &vec)
{
}

int main()
{

    vector<int> height{2, 1, 5, 6, 2, 3, 0, 2, 1, 10, 11, 2, 3};

    return 0;
}