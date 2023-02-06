#include <iostream>
using namespace std;
#define n 100

class Stack
{
    int *arr;
    int top;

public:
    Stack()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int val)
    {
        if (top >= n - 1)
        {

            cout << "Stack Overflow" << endl;
            return;
        }
        else
        {
            top++;
            arr[top] = val;
        }
    }
    void pop()
    {
        if (top <= -1)
        {
            cout << "Stack is empty" << endl;
            return;
        }
        else
        {
            top--;
        }
    }

    int Top()
    {
        if (top <= -1)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty()
    {

        return top == -1;
    }
};

int main()
{
    Stack st;
    st.push(2);
cout<<st.Top()<<endl;
st.pop();
cout<<st.Top()<<endl;

    return 0;
}
