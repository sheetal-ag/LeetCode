class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
        int n=nums.size();
        int left=0;int right=n-1;
        
        vector<int>nums2(nums);
        sort(nums2.begin(),nums2.end());
        
        
        for(int i=0;i<n;i++){
            int sum=nums2[left]+nums2[right];
            if(sum==target){
                break;
            }
            else if(sum>target){
                right--;
                
            }
            else{
                left++;
            }
            
        }
        
        vector<int>index;
        for(int i=0;i<n;i++){
            if(nums[i]==nums2[left] || nums[i]==nums2[right]){
                index.push_back(i);
            }
           
        }
        return index;
    }
};