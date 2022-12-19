class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& p) {
        int n = p.size() ;
        vector<int>res(n ,0);     
         stack<int>st;
       
        for(int i = 0 ; i<n ; i++){
           // if(st.empty()){
           //      st.push(i) ;
           //      continue ;
           // }
            
           while(!st.empty() && p[st.top()] < p[i] ){
                res[st.top()] = i  - st.top() ;
                st.pop();
           }
            
            st.push(i) ;
             
        }
    
         return res ;
      
    }
        
       
    
      
    
   
      
    
};