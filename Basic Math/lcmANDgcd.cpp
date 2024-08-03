//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Link - https://www.geeksforgeeks.org/problems/lcm-and-gcd4516/1


// } Driver Code Ends
class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) 
    {
        // code here
        // Duplicate values of parameters A and B, as we need original parameters for LCM
        long long a = A;
        long long b = B;
        
        long long gcd;
        
        while (A > 0 && B > 0)
        {
            if (A > B) A = A % B;
            else B = B % A;
        }
        if (A == 0) gcd = B;
        else gcd = A;
        
        // LCM
        long long lcm = ((a*b) / gcd);
        
        return {lcm, gcd};
        
    }
};