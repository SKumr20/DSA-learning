#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    // precompute 
    // make a hash array
    
    int hash[256] = {0};
    // for lowercase only, take only 26 sized array
    //int hash[26] = {0};
    for (int i=0; i<s.size(); i++) {
        hash[s[i]]++;
        // for lowercase only
        //hash[s[i] - 'a']++;
    }


    // Inputs for array and character to search
    int q;
    cin >> q;
    while (q--) {
        char c;
        cin >> c;

        // fetch
        cout << hash[c] << endl;
        
        // For lowercase only
        //cout << hash[c - 'a'] << endl;
    }

}