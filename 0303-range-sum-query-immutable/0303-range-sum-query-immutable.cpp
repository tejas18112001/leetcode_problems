class NumArray {
public:
    
    vector<int>res ;
    NumArray(vector<int>& nums) {
        //vector<int>res(nums.size(),0);
        // res[0] = nums[0] ;
        int sum = 0 ;
        for(int i = 0; i<nums.size() ; i++)
        {  
            sum+= nums[i] ;
            res.push_back(sum );
        }
      
    }
    
    int sumRange(int left, int right ) {
        if(left ==  0)
            return (res[right]  ) ;
        return ( res[right] - res[left-1] ) ;
    }
    
     
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */