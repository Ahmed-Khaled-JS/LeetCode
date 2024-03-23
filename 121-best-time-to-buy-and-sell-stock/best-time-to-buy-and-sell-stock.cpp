class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxnum = INT_MIN;
        int minnum = INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(prices[i] < minnum){
                minnum = prices[i];
            }
            maxnum = max(maxnum,prices[i] - minnum);
        }
        return maxnum;
    }
};