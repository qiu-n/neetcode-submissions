class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> arr = {0};
        for(int i = 0; i < prices.size(); i++){
            for(int j = i + 1; j < prices.size(); j++){
                if((prices[j] - prices[i]) > arr.back())
                arr.push_back(prices[j] - prices[i]);
            }
        }
        return arr.back();
    }
};
