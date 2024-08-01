#include <iostream>
#include <unordered_set>

using namespace std;


// Similar as set
// Stored Unique
// Does not store in sorted
// O(1) in most cases
// worst cases O(N)

void explainSet() {
    unordered_set<int>st;

    // lower_bound() and upper_bound() function does not work
    // rest all functions are same
    // Does not store in any particular order, 
    // so it has better complexity than set, in most cases
    // except some, when collision happens
}