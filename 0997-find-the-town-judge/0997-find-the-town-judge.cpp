class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        map<int,int>p;
        map<int , int>q;
        
        if(n==1) return 1;
        for(int i = 0 ; i<trust.size() ; i++) {
            p[trust[i][0]] = trust[i][1];
            q[trust[i][1]]++;
            
        }

        for(int i = 0; i<trust.size(); i++) {
        if(p[trust[i][0]] == 0 && q[trust[i][0]] == n-1) return trust[i][0];
        else if(p[trust[i][1]] == 0 && q[trust[i][1]] == n-1) return trust[i][1] ;
        }

        return -1;
    }
};