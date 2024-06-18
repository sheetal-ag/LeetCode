class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=0;i<numRows;i++){
            vector<int>v(i+1,1);//makes the entire array values equal to 1
            for(int j=1;j<i;j++){
                v[j]=ans[i-1][j]+ans[i-1][j-1];//i->current row,i-1->previous row,j->current index,j-1>previous index(this is sum of two elements from previous row)
                //example:i=2nd row:[1,1]
                //        i=3rd row:[1,1,1]
            }
            ans.push_back(v);
        }        
        
        return ans;
        
    }
};