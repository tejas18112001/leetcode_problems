class Solution {
public:
    int fun(vector<int>&t , int n) {
        int ans = 0 ; 
        int i = 0 , j = n-1;
        while(i<n && j>=0) {
            ans += (t[i]*t[j]) ;
            // cout<<"while loop"<<"\n" ;
            i++ , j-- ;
        }
        
        return ans ;
    }
    
    int numTrees(int n) {
        vector<int>t(n+1 , 0) ;
        t[0] = 1 , t[1] = 1 ;
        for(int i = 2 ; i<= n ; i++) {
            // cout<<"for loop"<<"\n" ;
            t[i] = fun(t , i) ;
        }
        return t[n] ;
    }
};