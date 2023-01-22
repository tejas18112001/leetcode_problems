class Solution {
public:
int n ;

    
bool isValid(string str) {
    if(str.size() > 3) return false ;
    if(str.size() >1 && str[0] == '0') return false;
    if(stoi(str) >255) return false;
    return true ;
}

void recur(int i, int dots, string temp, vector<string>& ans, string s)
{
	
    if(dots == 4 || i ==  n )
    {
        if(dots == 4 && i == n) {
       
            temp = temp + s.substr(i) ;
            temp.pop_back() ;
            ans.push_back(temp);
            
        }
    
      
        return;
    }
    
    recur(i+1 , dots+1 , temp+s.at(i) + '.' ,ans , s ) ;
    if(i+2 <=s.size() && isValid(s.substr(i , 2)))
    recur(i+2  , dots+1 , temp+s.substr(i ,2)+"." ,ans, s ) ;
    if(i+3 <=s.size() && isValid(s.substr(i , 3)))
    recur(i+3 , dots+1 , temp+s.substr(i ,3) +"." ,ans , s ) ;
 

    
   
 return ;   
}

vector<string> restoreIpAddresses(string s) {
    
    n = s.size( ) ;
    vector<string> ans;
    if(n >12) return {};
    if(s.size()<4) return ans;
    
    recur(0, 0, "", ans, s);
    
    return ans;
}
};





























