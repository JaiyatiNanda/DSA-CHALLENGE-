class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int price=prices[0];
        int maxprofit=INT_MIN;
        for(int i=0;i<prices.size();i++){
            int cost=prices[i]-price;
            price=min(price,prices[i]);
            maxprofit=max(cost,maxprofit);
        }return maxprofit;
        
    }
};
