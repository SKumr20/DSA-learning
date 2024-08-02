#include <iostream>
#include <queue>

using namespace std;

// QUEUE data structure - FIFO - First in, first out
// Complexity is O(1) - Constant time

void explainQueue() {
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.emplace(4); // {1, 2, 4}

    q.back() += 5; // {1, 2, 9} - Adds 5 to the last element

    cout << q.back(); // Prints 9
    cout << q.front(); // Prints 1

    q.pop(); // {2, 9}

    cout << q.front(); // Prints 2

    // size swap empty, same as stack
}