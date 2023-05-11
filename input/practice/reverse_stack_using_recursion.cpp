#include<iostream>
#include<stack>
using namespace std;

int main(int argc, char const *argv[])
{
    stack<int> st;
    st.push(3);
    st.push(2);
    st.push(1);
    //cout<<st.top();
    for (int i = 0; i <= st.size(); i++)
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    

    return 0;
}
