class Solution {
public:
    string convert(string s, int rows) {
        if(rows == 1) 
            return s ;
        
        int cols = 0;
        int n = s.size() ;
       
        int section = ceil(n/(2*rows - 2.0)) ;
        
        
        // total number of section 
        // 1 section have 2*rows - 2 element
        // so n element string have (n /(2*rows -2 )) section
        // each section have rows -1 cols
        // so  (n /(2*rows -2 )) section have (n /(2*rows -2 ))*(rows -1) cols ;
       
         cols =  section *(rows - 1)     ;
         // cols += 1 ;
         cout<<cols<<endl ;
         vector<vector<char>>p(rows , vector<char>(cols ,' ')) ;
        
        int k = 0 ; 
        int i = 0 , j = 0 ; 
         while(k < n) {
            
           
            while(j<rows && k<n) {
              
                p[j][i] = s[k] ;
                k++ ;
                j++ ;  //row increases 
               
        }
            j = j -2 ;
            i++ ;
             
            while(j > 0 && i<cols &&  k<n){
                
                    p[j][i] = s[k] ;
                    k++ ;
                
                i++ ,j-- ;
            }
            
        }
        
        string ans ;
        for(int i = 0 ; i<rows ;i++) {
            for(int j = 0 ; j<cols ; j++) {
                if(p[i][j] != ' ')
                ans+= p[i][j] ;
            }
           
        }
       
        
        return ans ;
     }
};