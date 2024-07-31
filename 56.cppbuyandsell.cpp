#include<iostream>
#include<vector>
using namespace std;
int main(){


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) {
            return 0;
        }

        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int price : prices) {
            // Update the minimum price seen so far
            minPrice = min(minPrice, price);

            // Calculate the potential profit if we sell at the current price
            int potentialProfit = price - minPrice;

            // Update the maximum profit if the potential profit is greater
            maxProfit = max(maxProfit, potentialProfit);
        }

        return maxProfit;
        }
};
}
