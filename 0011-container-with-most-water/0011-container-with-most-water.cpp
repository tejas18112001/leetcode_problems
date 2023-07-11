class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = INT_MIN ;
        int i = 0 , j = height.size()-1 ;
        while(j>=i) {
            ans = max(ans , min(height[i] , height[j])*(j-i)) ;
            if(height[i] > height[j]) {
                j-- ;
            }else if(height[i] < height[j]) {
                i++ ;
            }else {
                if(i<height.size()-1 && j > 0 &&height[i+1] >= height[j-1])
                    i++ ;
                else 
                    j-- ;
            }
        }
        return ans ;
    }
};