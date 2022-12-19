class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& p) {
        int n = p.size() ;
        vector<int>ans(n ,0);     
        map<int , int>mp ;
   

        
        // for(int i = 0 ; i <n ; i++){
        //     mp[i] = 0 ; 
        //     cout<<mp[i]<<" ";
        // }
        
        stack<int>st;
        
          
        for(int i = 0 ; i<n ; i++){
            
            if(st.empty())
            {
                st.push(i) ;
                continue ;
            }
            
           while(!st.empty() && p[st.top()] < p[i] ){
               
              
               mp[st.top()] = i  - st.top() ;
                
               //ans[i] = st.top() - i ;
               st.pop();
           }
            
            
             st.push(i) ;
             
        }
        
        while(!st.empty()) {
         
        st.pop() ;
        }
        
       
        for(int i = 0 ; i<n ; i++){
            p[i] = mp[i] ;
        }
         return p  ;
      
    }
        
       
    
      
    
   
      
    
};