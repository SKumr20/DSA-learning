#include <iostream>
#include <stack>

using namespace std;


//Stack is LIFO = Last in first out 
// Every stack function operation has time complexity of O(1)

void explainStack() {
    stack<int> st;

    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}
    st.push(3); // {3, 3, 2, 1}
    st.emplace(5); // {5, 3, 3, 2, 1}

    cout << st.top(); // Prints 5, as 5 is the last element that went in
    // So 5 is at the top

    // INDEXING IS NOT ALLOWED IN STACK
    // st[2] is invalid

    st.pop(); // {3, 3, 2, 1} - removes top element from stack

    cout << st.top(); // 3 - prints top element

    cout << st.size(); // 4
    cout << st.empty(); // False

    stack<int>st1, st2;
    st1.swap(st2); // Swap stack 1 with another swap

}