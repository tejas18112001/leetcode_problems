class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>ans ;
        int i = 0 , j = 0 ;
        while(i<m && j<n) {
            if(nums1[i] < nums2[j]) {
                ans.push_back(nums1[i]) ;
                i++ ;
            }else {
                ans.push_back(nums2[j]) ;
                j++ ;
            }
        }
        
        if(i == m) {
            while(j<n) {
                ans.push_back(nums2[j]) ;
                j++ ;
            }
        }
        
        else {
             while(i<m) {
                ans.push_back(nums1[i]) ;
                i++ ;
            }
        }
        
        nums1 = ans ;
    }
};