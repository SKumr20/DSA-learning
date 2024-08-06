// https://www.geeksforgeeks.org/problems/find-all-factorial-numbers-less-than-or-equal-to-n3548/0?problemType=functional&difficulty%255B%255D=-1&page=1&query=problemTypefunctionaldifficulty%255B%255D-1page1

class Solution {
  public:
  
    long long factorial(long long n)
    {
        if (n==0) return 1;
        return n*factorial(n-1);
    }
    
    vector<long long>v;
    
    vector<long long> factorialNumbers(long long n) 
    {
        // Write Your Code here
        for (int i=1; factorial(i) <= n; i++)
        {
            v.push_back(factorial(i));
        }
        return v;
    }
};