class Solution {
public:
    
    // permutation function 
    // combination function  this function call permutation when base condition is arise
    // combination function need -> string which you forwarding to permutation function
    // increase count in permutation function not in combination function 
    
  
    set<string>p ;
    map<int , int> flag ;
    void permutation(string s ,string temp  ) {
     
        for(int i = 0 ; i<s.size() ; i++) {
           
            if(flag[i] != 1) {
                temp.push_back(s[i] );
                p.insert(temp) ;
                flag[i]  = 1 ;
                permutation(s, temp ) ;
                
                flag[i] = 0;
                temp.pop_back() ;
            }
          
             
        }
    }
    
    
        
    
    int numTilePossibilities(string tiles) {
        int cntt = 0 ;
        int n = tiles.size() ;
        vector<int>flag(n , 0) ;
        permutation(tiles , ""  ) ;
        // cout<<cnt++ ;
        return p.size() ;
    }
};