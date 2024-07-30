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
    for (auto it : v) {
        cout << it << " ";
    }

};