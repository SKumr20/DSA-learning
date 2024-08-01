#include <iostream>
#include <set>

using namespace std;

// MULTISET

// SET - sorted, unique
// MULTISET - only set

void explainMultiSet() {
    // Everything is same as set
    // except is stores duplicate elements also

    multiset<int>ms;
    ms.insert(1); //{1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}

    ms.erase(1); // all 1s are erased

    int cnt = ms. count(1); 

    // if we need only one 1 erased
    // use an iterator to point to the element's address
    // then erase that iterator

    ms.erase(ms.find(1));

    // erase two 1s
    ms.erase(ms.find(1), ms.find(1)+2);

    // rest all function same as set
}