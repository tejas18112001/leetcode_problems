class Solution {
public:
    bool isAlienSorted(vector<string>& w, string order) {
        // map[i] > || < map[j] return
        // check map[i] == map[j] => i++ , j++ ; ->through for loop from i = 0 to i<min(words[i].size()  , words[i+1].size()) 
        unordered_map<int , int>Map ;
        for(int i = 0 ; i<26 ;i++) {
            Map[order[i]] = i+1 ;
        }
        
        for(int j = 0 ; j<w.size()-1 ; j++) {
            int cnt = 0 ;
            for(int i = 0 ; i<min(w[j].size() , w[j+1].size() )  ; i++  ) {
                if(Map[ w[j][i] ]  == Map[ w[j+1][i]  ] ) {
                    
                    cnt++ ;
                    if(cnt == min(w[j].size() , w[j+1].size() ) && 
                                                             w[j].size() > w[j+1].size() ) 
                    return false ;
                    
                    
                    continue ;
                }
                    
                else if(Map[w[j][i]]  < Map[w[j+1][i]]) break ;
                else if(Map[w[j][i]] > Map[w[j+1][i]])
                    return false ;
                    
            }
        }
        return true ;
    }
};