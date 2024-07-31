 class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int a=prices[0];
        int maxProfit=0;
        for (int i=1;i<prices.size();i++){
            if (a>prices[i]) {
                a=prices[i];
            }
            maxProfit = max(maxProfit, prices[i]-a);
        }
        return maxProfit;
    }
};
