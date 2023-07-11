class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = INT_MIN ;
        int i = 0 , j = height.size()-1 ;
        while(j>=i) {
            ans = max(ans , min(height[i] , height[j])*(j-i)) ;
            if(height[i] > height[j]) 
                j-- ;
            else 
                i++ ;
            
        }
        return ans ;
    }
};