class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int rem = 0,ans = 0;
        // int empty;
        // int i=0;
        while((numBottles+rem)>=numExchange)
        {
            ans += numBottles;
            numBottles += rem;
            rem = numBottles % numExchange;
            numBottles = numBottles / numExchange;

        }

        return ans+numBottles;
    }
};