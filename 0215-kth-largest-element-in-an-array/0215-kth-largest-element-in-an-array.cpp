class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq ;
        
        for(auto i: nums) {
            pq.push(i) ;
        }
        
        int cnt = 0 ;
        int  num = pq.top() ;
        while(cnt != k){
            num = pq.top() ;
            pq.pop() ;
            cnt++ ;
        }
        
        return num ;
        
    }
};