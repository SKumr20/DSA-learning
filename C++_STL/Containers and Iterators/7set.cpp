#include <iostream>
#include <set>

using namespace std;

// SET container

// Stores everything in a sorted, and unique order
// Not a linear container, has a tree inside
// Everything in set happens in logarithmic time complexity


void explainSet() {
    set<int>st;
    st.insert(1); // {1}
    st.emplace(2); // {1, 2}
    st.insert(2); // {1, 2}
    st.insert(4); // {1, 2, 4}
    st.insert(3); // {1, 2, 3, 4}

    // Functionality of insert in vector can also
    // be used, that only increases efficiency

    // Begin(), end(), rbegin(), rend(), size()
    // empty() and swap() are same as those above

    // {1, 2, 3, 4, 5}
    auto it = st.find(3); // Returns an iterator, points to address of 3

    // {1, 2, 3, 4, 5} 
    auto it = st.find(6); // 6 IS NOT IN THE SET
    // When an element is not int the set, then 
    // using find, the iterator points to st.end()
    // i.e address after the last element

    // {1, 4, 5}
    st.erase(5); // erases 5, TAKES LOGARITHMIC TIME
    // maintains sorted order

    int cnt = st.count(1);
    // Returns 1, or 0
    // because set has only unique elements,
    // If an element exists, its count must be = 1
    // else, the count is 0

    auto it = st.find(3);
    st.erase(it); // TAKES CONSTANT TIME

    // {1, 2, 3, 4, 5}
    // erase everything between 2 and 4
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // after erase {1, 4, 5} {first, last}

    // lower_bount() and
    // upper_bound() function works in the same way as in vector


    // This is the syntax for lower/upper bound

    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);

}