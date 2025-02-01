class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> frequency;
        unordered_set<int> uniqueCounts;

        for(int &x:arr){
            frequency[x]++;
        }

        for(auto &it:frequency){
            int num=it.second;
            if(uniqueCounts.find(num)!=uniqueCounts.end()){
                return false;
            }
            uniqueCounts.insert(num);
            
        }
        return true;
        
    }
};