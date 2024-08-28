class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int diff = 0;
        int smallest = prices[0];

        for (int i = 1; i < prices.size(); i++) {
            diff = max(diff, prices[i]-smallest);
            smallest = min(smallest, prices[i]);
        }
        return diff;
    }
};