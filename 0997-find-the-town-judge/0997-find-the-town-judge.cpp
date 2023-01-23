class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        map<int,int>p;
      
        
        if(n==1) return 1;
        for(auto i:trust) {
            p[i[0]]-- ;
            p[i[1]]++;
            
            
        }

        for(auto i:p) {

            if(i.second == n-1) return i.first; 
        // if(p[trust[i][1]] == 0 && q[trust[i][1]] == n-1) return trust[i][1] ;
            
        }

        return -1;
    }
};