class Solution {
public:
   
    vector<int>square ;
    bool dfs(vector<int> &sidesLength,const vector<int> &matches, int index , int length) {
        if (index == matches.size())
            return sidesLength[0] == sidesLength[1] && sidesLength[1] == sidesLength[2] && sidesLength[2] == sidesLength[3];
        
        for (int i = 0; i < 4; ++i) {
            if(sidesLength[i] + matches[index] <= length) {
            sidesLength[i] += matches[index];
            if (dfs(sidesLength, matches, index + 1 , length))
                return true;
            sidesLength[i] -= matches[index];
            }
        }
        return false;
    }
    bool makesquare(vector<int>& nums) {
        square.resize(4,0) ;
        int sum = accumulate(nums.begin() , nums.end() , 0) ;
        int length = sum/4 ;
        if(sum%4 != 0) return false; 
        // sort(nums.begin() , nums.end() , greater<int>()) ;
        sort(nums.begin() , nums.end() , greater<int>()) ;
        return dfs(square , nums, 0 , length) ;
        
    }
};