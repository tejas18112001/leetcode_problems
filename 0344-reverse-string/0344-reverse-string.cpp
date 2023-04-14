class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0 , j = s.size()-1 ;
        while(j>=i) {
            char c = s[i] ;
            s[i] = s[j] ;
            s[j] = c ;
            j--  , i++ ;
        }
        // return s ;
    }
};