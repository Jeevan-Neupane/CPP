#include <iostream>
using namespace std;
#include <stack>
#include <string>
#include <math.h>

int calculate(int v1, int v2, char op)
{
    if (op == '^')
    {
        return pow(v1, v2);
    }
    if (op == '*')
    {
        return v1 * v2;
    }
    if (op == '+')
    {
        return v1 + v2;
    }
    if (op == '/')
    {
        return v1 / v2;
    }

    return v1 - v2;
}

int precedence(char ch)
{
    if (ch == '^')
        return 3;
    else if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;

    else
        return -1;
}

int eval(string st)
{
    stack<int> nums;
    stack<int> ops;

    for (int i = 0; i < st.size(); i++)
    {
        if (isdigit(st[i]))
        {
            nums.push(st[i] - '0');
        }
        else if (st[i] == '(')
        {
            ops.push('(');
        }
        else if (st[i] == ')')
        {
            while (!ops.empty() && ops.top() != '(')
            {
                char op = ops.top();
                ops.pop();

                int v2 = nums.top();
                nums.pop();
                int v1 = nums.top();
                nums.pop();
                nums.push(calculate(v1, v2, op));
            }
            if (!ops.empty())
            {

                ops.pop();
            }
        }
        else
        {
            while (!ops.empty() && (precedence(ops.top()) >= precedence((st[i]))))
            {
                char op = ops.top();
                ops.pop();

                int v2 = nums.top();
                nums.pop();
                int v1 = nums.top();
                nums.pop();
                nums.push(calculate(v1, v2, op));
            }
            ops.push(st[i]);
        }
    }

    while (!ops.empty())
    {
        char op = ops.top();
        ops.pop();

        int v2 = nums.top();
        nums.pop();
        int v1 = nums.top();
        nums.pop();
        nums.push(calculate(v1, v2, op));
    }
    return nums.top();
}

int main()
{
    string str = "1+(2*(3-1))+2";
    cout << eval(str) << endl;

    return 0;
}