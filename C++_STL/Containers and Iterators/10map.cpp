#include <iostream>
#include <map>

// Each value in a map has a UNIQUE key associated with it
// Sorted key order
// Map stores unique keys in sorted order
//[{1, 2}, {2, 4}, {3, 1}]

using namespace std;

void explainMap() {
    map<int, int> mpp;

    map<int, pair<int, int>> mpp;

    map<pair<int, int>, int>mpp;

    // Stores {1, 2}
    mpp[1] = 2;

    // Another method
    // Stores {3, 1}
    mpp.emplace({3, 1});

    mpp.insert({2, 4});

    mpp[{2, 3}] = 10; // Key is a pair {2, 3}, and value is {10}

    // Map is stored like this, after the above command
    {
        {1, 2}
        {2, 4}
        {3, 1}
    }


    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1]; // output 2
    cout << mpp[5]; // Null/0 as key 5 does not exist

    // To know where the address of a key lies
    auto it = mpp.find(3);
    cout << *(it).second; // Recall * -> Pointer to the address of key, which iterator points to
                          // So *(it).second = Gives the element associated with the key
    
    auto it = mpp.find(5) // Since 5 does not exist, it points to the value after the end of the map

    // Syntax for lower and upper bound
    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);

    // erase, swap, size, empty are same as others
    
}    

void expainMultiMap() {
    // everything similar as map, only it can store multiple keys
    // Only mpp[key] cannot be stored here
}