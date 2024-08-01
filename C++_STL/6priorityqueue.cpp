#include <iostream>
#include <queue>

// Largest size element - character, string, int, stays at the top
// Not a linear data structure
// push - O(logn)
// top - O(1)
// pop - O(logn)

using namespace std;

void explainPQ() {
    priority_queue<int>pq;

    // Also known as max heap
    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}

    cout << pq.top(); // prints 10, as 10 is the largest element

    pq.pop(); // {8, 5, 2}
    
    cout << pq.top(); // Prints 8

    // Size swap empty function same as others

    // Minimum heap
    // stores minimum element at the top

    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5); // {5}
    pq.push(2); // {2, 5}
    pq.push(5); // {2, 5, 8}
    pq.emplace(5); // {2, 5, 8, 10}

    cout << pq.top(); // prints 2
}