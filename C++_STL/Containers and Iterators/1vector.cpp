#include <iostream>
#include <vector>

using namespace std;

void explainVector() {
	vector<int> v; // Creates an empty container
	
	v.push_back(1);  // v = {1}
	v.emplace_back(2);  // Dynamically increases size, and is faster than push back
	// v = {1, 2}
    
    vector<pair<int, int>>vec; // Vector of pair data type 
	
	v.push_back({1, 2});
	v.emplace_back(1, 2); // Automatically assumes it as a pair
	
	vector<int> v(5, 100); // Creating {100,100,100,100,100}
	
	vector<int> v(5);
	
	vector<int> v1(5, 20); // {20,20,20,20,20}
	vector<int> v2(v1); // Makes a copy of v1
	

    // Accessing elements of vector is similar to array
    // v = {10, 20} = v[1] = 10
	
    // Or we can use an iterator

    // Iterator template -> DataStructure(Data Type)::iterator name

	vector<int>::iterator it = v.begin(); // v.begin points to memory, to get value, use *

	
	it++; // Iterator was started at beginning but now, we increment it
	cout << *(it) << " "; // Print the value using *

    vector<int>::iterator it = v.end(); // Points after the last memory location
    vector<int>::iterator it = v.rend(); // Reverse end
    vector<int>::iterator it = v.begin(); // reverse begin, moves in the reverse direction

    cout << v[0] << " " << v.at(0);

    cout<<v.back() << " "; // Element at the last, eg. v = {10, 20, 30} then v.back() = 30; 

    // Methods to print vectors
    // We can use a simple index based for loop

    // Or we can use this, using iterators, begin and end
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " "; // remember to use *
    }

    // Shortcut

    // auto = automatically assigns a vector iterator, takes care of data types of vector
    // This is a for-each loop
    for (auto it : v) {
        cout << it << " ";
    }

    // Erase elements from vector
    // {10, 20, 12, 23}
    v.erase(v.begin()+1); // 20 gets erased

    // Erase multiple elements  - {Start, end} parameter
    // {10, 20, 12, 23, 35}
    v.erase(v.begin() + 2, v.begin() + 4); // {10, 20, 35}

    // Insert function

    vector<int>v{2, 100}; // Creates {100, 100}
    v.insert(v.begin(), 300); // {300, 100, 100}

    // Insert many elements
    v.insert(v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100} Element 10 gets inserted 2 times

    // Insert a vector into another vector
    vector<int> copy(2, 50); // Vector named copy 

    // Original v vector from above = {300, 10, 10, 100, 100}
    // Add vector copy to vector v, from begin of copy to end of copy
    v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

    // Get size of a vector - number of elements inside a vector
    cout << v.size(); // 2

    // Pop_back - removes the last element
    // v = {10, 20}
    v.pop_back(); // {10}

    // v1 -> {10, 20}
    // v2 -> {30, 40}
    v1.swap(v2); // v1 -> {30, 40}, v2 -> {10, 20}

    v.clear(); // erases entire vector

    // True if vector is empty
    cout << v.empty();

};