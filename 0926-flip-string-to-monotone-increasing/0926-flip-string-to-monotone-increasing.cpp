class Solution {
public:
    int minFlipsMonoIncr(string s) {
         int cnt0  = 0 , cnt1 = 0 ;
        int i = 0 ;
        int ans = 0  , p = 0;
        while(i<s.size() && s[i] == '0')
        {
            i++;
        }
        
        for(;i<s.size() ; i++)
        {
            if(s[i] == '0')
                cnt0++;
            else
                cnt1++;
            
            cnt0 = min(cnt0 , cnt1) ;
        }
        
        
       

        return cnt0;
    }
};