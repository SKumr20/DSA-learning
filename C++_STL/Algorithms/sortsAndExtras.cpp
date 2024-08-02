// Write our own comparator,for the example

bool comp(pair<int, int>p1, pair<int, int>p2) {
    if (p1.second < p2.second) {
        return true;
    } else if(p1.second == p2.second) {
        if (p1.first>p2.second) return true;
    }
    return false;
}

void explainExtras() {

    sort(a, a + n);     // Sort from starting iterator, to the end iterator 

    // Sorting for a vector
    sort(v.begin(), v.end());

    // Sort only a part of array
    sort(a+2, a+4);

    // Sorting in a descending order - greater<int>
    sort(a, a+n, greater<int>);
    // greater int - inbuilt comparator
 

    // Sorting in some other way
    // EXAMPLE - 

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};

    // sort it according to a second element - {{2, 1}, {2, 1}, {2, 1}}
    // but now, the fist 2 elements have the same second element

    // if second element is same, them sort it according
    // to first element, but in descending
    // {{4, 1}, {2, 1}, {1, 2}}

    sort(a, a+n, comp); // Comp - Self written comparator

    // {4, 1}, {2, 1}, {1, 2};
 
    // how many set bits, i.e 1 in binary are there
    int num = 7;
    int cnt = __builtin_popcount();

    // for a long number
    long long num = 165786578687;
    int cnt = __builtin_popcountll();


    // Next permutation
    // Get the next permutations of a string, in dictionary order
    // To get all the permutations

    string s = "123"; // IMPORTANT to start from sorted order
    // because if the number is 231, then the permutations will be 312,321, and end

    sort(s.begin(), s.end());
    do {
        cout<<s<<endl;
    } while (next_permutation(s.begin(), s.end())); // Print all permutations untill no more left, i.e it returns null


    // Gives the max element from an array, using iterator
    // Gives address
    // use * for value
    int maxi = *max_element(a, a+n);
}

