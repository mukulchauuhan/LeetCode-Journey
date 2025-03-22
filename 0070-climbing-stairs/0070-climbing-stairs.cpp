class Solution {
public:
    int climbStairs(int n) {
        // base case :
        int firstPrev=2;
        int secondPrev=1;
        for(int i=3; i<=n; i++){
            int currentIdx = firstPrev + secondPrev;
            secondPrev=firstPrev;
            firstPrev=currentIdx;
        }
        return n==1 ? 1 : firstPrev;
    }
};