class Solution {
public:
    string largestNumber(vector<int>& num) {
              
          vector<string> s;
        for(auto i:num)
            s.push_back(to_string(i));
        sort(begin(s), end(s), [](string &str1, string &str2)
             { 
                 return str1+str2>str2+str1; 
             });
        string res;
        for(auto i:s)
            res+=i;
        int n = count(res.begin() , res.end() , '0') ;
        if(res.size() == n )
            return "0" ;
        return  res;    


    }
};