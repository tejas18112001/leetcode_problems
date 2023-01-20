class Solution {
public:
    int romanToInt(string s) {
        int n = s.size() ;
        int res = 0 ;
         map<char , int>p ;
       
            p['I'] = 1 ;
            p['V'] = 5 ;
            p['X'] = 10 ;
            p['L'] = 50;
            p['C'] = 100;
            p['D'] = 500;
            p['M'] = 1000 ;
          
        vector<bool>v(n , false);
        // for(auto i:v)
        //     cout<<i<<" ";
        // for(auto i:p)cout<<i.second<<" ";
        // res = p[s[n-1]] ;
        // v[n-1] = true ;
        // int i = n-2 ; i>=0 ; i--
         for(int i = 0 ; i<n ; i++){
             if(v[i] == false){
                 
             if(p[s[i]] < p[s[i+1]]){
                
                 // cout<<s[i] <<" ";
                int q = p[s[i+1]] - p[s[i]] ;
                res +=  q ;
                 // res -= p[s[i]] ;
                v[i] = true;
                v[i+1] = true;
            
             }               
            else{
               
                 // cout<<s[i] <<" " ;
                res += p[s[i]];
                v[i] = true ;
            }
                 
     }
            //  cout<<endl;
            //  for(auto i:v)
            // cout<<i<<" ";
     
         }
        return res ;
    }
};