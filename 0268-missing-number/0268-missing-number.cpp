class Solution {
public:
/*int sorting(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
        if(i!=nums[i])
        return i;
    }
    return nums.size();//in case of {0,1} type where nums.size()=2
    }*/
 int xorr(vector<int>& nums) {
      int a=0;
      int b=0;
       for(int i=0;i<=nums.size();i++)
       {    a=a^i;
        }
        for(int i=0;i<nums.size();i++)
       {    
           b=b^nums[i];
        }
      int r= a^b;
    return r;
    }


    int missingNumber(vector<int>& nums) {
     return xorr(nums);
     //return sorting(nums);
    }
     
};



//take care of range of for loops