class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        long long ans = numBottles;
        long long empty = numBottles;

        while (empty >= numExchange) {
            empty -= numExchange;
            numExchange++;
            empty++;
            ans++;
        }
        return (int)ans;
    }
};
