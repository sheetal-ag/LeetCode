class Solution {
public:
    int mySqrt(int x) {
    int low = 0, high= x,ans=0;
        while(low<=high){
            
            long long mid= (low+high)/2;
            long long val= mid*mid;

            if(val==x){
            return mid;
            }

            else if(val<x){
            low=mid+1;
            ans=mid;
            }

            else{
            high=mid-1;
            }
        }
        return ans;
        
    }
};