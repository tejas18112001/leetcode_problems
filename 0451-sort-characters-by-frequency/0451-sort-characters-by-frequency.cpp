class Solution {
public:
    
bool p(char a , char b)
{
        //return counts[a]>counts[b] || (counts[a] == counts[b] && a<b) ;
            return a>b ;

}
    string frequencySort(string s) {
//          int n = s.size() ;
//         unordered_map<char , int>p ;
//         vector<string>bucket(n+1 , "");
//         string res ;
       
//         for(int i = 0 ; i < n ; i++)
//         {
//             p[s[i]] ++;
//         }
        
//         for(auto i:p)
//         {    int frq ; char chr ;
//              frq = i.second ;
//              chr = i.first ;
//            // bucket[frq] += chr ;
//              bucket[frq].append(frq , chr) ;
//         }
        
        
//         for(int i = n ; i>0 ; i--)
//         {
//             if(bucket[i] != "" )
//             {
//                 res += bucket[i] ;
//             }
//         }
//         return res ;
        
        unordered_map<char , int>counts;
        for (char ch : s)
            ++counts[ch];
        sort(s.begin(), s.end() , [&](char a , char b)
        {
                 return counts[a] > counts[b] || (counts[a] == counts[b] && a>b )  ;
        }) ;  
        
      return s;
        
        
        
    }
}; 