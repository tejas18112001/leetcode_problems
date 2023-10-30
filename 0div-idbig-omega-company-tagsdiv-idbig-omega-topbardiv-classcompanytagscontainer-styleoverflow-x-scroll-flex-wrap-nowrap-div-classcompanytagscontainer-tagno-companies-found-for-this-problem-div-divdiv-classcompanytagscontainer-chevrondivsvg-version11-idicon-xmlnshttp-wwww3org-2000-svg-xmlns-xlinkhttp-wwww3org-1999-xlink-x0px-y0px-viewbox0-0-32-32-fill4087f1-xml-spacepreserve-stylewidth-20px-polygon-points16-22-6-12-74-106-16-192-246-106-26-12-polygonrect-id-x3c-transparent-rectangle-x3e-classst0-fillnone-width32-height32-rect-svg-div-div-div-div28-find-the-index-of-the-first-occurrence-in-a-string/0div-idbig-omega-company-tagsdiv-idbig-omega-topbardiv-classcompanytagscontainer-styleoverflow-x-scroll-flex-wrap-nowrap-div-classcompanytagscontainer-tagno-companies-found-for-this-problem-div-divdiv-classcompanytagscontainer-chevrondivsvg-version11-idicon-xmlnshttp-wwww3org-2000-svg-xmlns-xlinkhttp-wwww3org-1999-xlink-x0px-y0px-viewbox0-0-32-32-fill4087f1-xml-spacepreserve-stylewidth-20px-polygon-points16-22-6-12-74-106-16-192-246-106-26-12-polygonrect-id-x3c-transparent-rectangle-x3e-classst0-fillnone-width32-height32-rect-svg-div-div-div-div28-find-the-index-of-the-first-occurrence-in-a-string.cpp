class Solution {
public:
    int strStr(string haystack, string needle) {
        vector<int>arr ;
        char ch = needle[0] ;
        for(int i = 0 ; i<haystack.size() ; i++) {
            if(ch == haystack[i])
                arr.push_back(i) ;
        }
        
        for(int i = 0 ; i<arr.size() ; i++) {
            int stri = arr[i] ;
            if(stri + needle.size()-1 <= haystack.size()-1) {
                string s = haystack.substr(stri ,needle.size()) ;
                if(s == needle) return stri ;
            }
        }
        
        return -1 ;
    }
};