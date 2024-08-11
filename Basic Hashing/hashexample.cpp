#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int array[n];

    // Take inputs for elements of array
    for (int i=0; i<n; i++) {
        cin >> array[i];
    }
 
    // Precompute
    int hash[13] = {0};
    
    // let the maximum value be 12. 
    // Put the maximum size as per the question mentioned

    for (int i=0; i<n; i++) {
        hash[array[i]] += 1; // For each element in original array, go to the hash array index and increment the frequency  
    }


    // fetch
    int q; // How many numbers to search for frequeny
    cin >> q;
    while (q--) {
        int number;  // Which number to search
        cin >> number;

        // fetch
        cout << "Frequency of: "<< number << " is: " << hash[number] << endl;
    }
    return 0;
}