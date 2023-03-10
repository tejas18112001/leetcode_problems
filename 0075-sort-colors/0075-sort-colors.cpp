class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z_cnt = 0 , o_cnt = 0  ,t_cnt = 0  ;
        for(auto i : nums) {
            if(i == 0) z_cnt++ ;
            else if(i == 1) o_cnt ++ ;
            else t_cnt++ ;
            
        }
        
        for(int i = 0 ; i<nums.size() ; i++) {
            while(z_cnt) {
                nums[i] = 0 ;
                z_cnt-- ;
                i++ ;
            }
            
             while(o_cnt) {
                nums[i] = 1 ;
                o_cnt-- ;
                i++ ;
            }
            
             while(t_cnt) {
                nums[i] = 2 ;
                t_cnt-- ;
                i++ ;
            }
        }
       return ;
    }
};