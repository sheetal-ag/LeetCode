class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        //edge cases
        if(arr.size()==1)//single element
        return 0;
        if(arr[0]>arr[1])//first element is peak element
        return 0;
        if(arr[arr.size()-1]>arr[arr.size()-2])//last element is the peak element
        return arr.size()-1;


        int low=1,high= arr.size()-2;
        while(low<=high){
            int mid=(low+high)/2;

            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1])//mid is peak
              return mid;
            if(arr[mid-1]<arr[mid])//peak is in increasing curve
               low=mid+1;
            else 
            high=mid-1;  //infinite loop case and peak in decreasing curve combined
        }
              
    return -1;
        
    }
};