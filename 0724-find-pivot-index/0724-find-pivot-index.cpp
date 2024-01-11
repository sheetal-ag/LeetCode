class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int n=nums.size();
        int j;
    for(int j=0;j<n;j++){
        
        int lsum=0;
        int rsum=0;
        int i;
        
        for(i=j-1;i>=0;i--){
            lsum=lsum+nums[i];
        }
        for(i=j+1;i<n;i++){
            rsum=rsum+nums[i];
        }
        if(lsum==rsum){
            return j;
        }
    }
        
     return -1;
        
    }
};



/*Prefix Sum Approach

int prefixSumApproach(vector<int>&nums){
vector<int>lsum(nums.size(),0);
vector<int>rsum(nums.size(),0);

//lsum
for(int i=1;i<nums.size();i++){
lsum[i]=lsum[i-1]+nums[i-1];
}

//rsum
for(int i=nums.size()-2;i>=0;i--){
rsum[i]=rsum[i+1]+nums[i+1];
}

for(int i=0;i<nums.size();i++){
if(lsum[i]==rsum[i])
return i;
}
return -1;
}
*/