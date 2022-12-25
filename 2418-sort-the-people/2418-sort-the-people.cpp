class Solution {
public:

    
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size() ;
        vector<pair<int , string>> p(n) ;
        
        for(int i = 0 ; i <n ; i++)
        {
            p[i].first = heights[i] ;
            p[i].second = names[i] ;
        }
        
        sort(p.begin() ,p.end()) ;
        reverse(p.begin() , p.end()) ;
       
        int i = 0  ;
         for(auto j : p)
         {
             names[i] = j.second ;
            i++; 
         }
      

        
      return names ;
        }
};