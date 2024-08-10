class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice=INT_MAX;
        int maxProf=0;
        int n=prices.size();
        
        for(int i=0;i<n;i++){
            minPrice=min(minPrice,prices[i]);
            maxProf=max(maxProf,prices[i]-minPrice);
        }
        return maxProf;
    }
};