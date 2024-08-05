class Solution {
  public:
    void printNos(int N) {
        // code here 
        if (N < 1) return; // Base case
        cout << N << " ";
        printNos(N-1);
    }
};

