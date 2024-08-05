// Print sum of cubes of numbers upto n using recursion

class Solution {
  public:
  long long count = 1;
  long long sum = 0;
    long long sumOfSeries(long long n) {
        // code here
        if (count > n) {
            return sum; // Base case
        }
        sum += count*count*count;
        count++;
        sumOfSeries(n);
    }
};