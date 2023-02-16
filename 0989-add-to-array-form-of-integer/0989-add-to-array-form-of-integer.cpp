class Solution {
public:
    vector<int>p ;
    void IntToArray(int k) {
        while(k) {
            int digit = k%10 ;
            p.insert(p.begin() , digit) ;
            k = k/10 ;
        }
    }
    
    vector<int> addToArrayForm(vector<int>& num, int k) {
      IntToArray(k) ;
      int m = max(num.size() , p.size()) ;
   
       vector<int>q ;
        int i = num.size()-1 ; 
        int j = p.size()-1 ;
    //   cout<<num
       int carry = 0 ;
        while( m--) {
            int sum = 0 ;
            sum += carry ;
            if(i>=0) sum += num[i--] ;
            if(j>=0) sum += p[j--] ;
            //  cout<<sum<<" " ;
            q.insert(q.begin() , sum%10) ;
            carry = sum/10 ;
           
        }
        
        
        
        while(carry != 0 ){
            q.insert(q.begin() , carry%10) ;
            carry  = carry /10 ;
        }
        
        for(auto i : q) cout<<i<<" " ;
        
        
        
        
        
        
      
        return q ;
    }
};