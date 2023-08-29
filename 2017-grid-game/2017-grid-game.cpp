#define ll long long

class Solution {
    
public:
    
    long long gridGame(vector<vector<int>>& grid) {
    int n= grid[0].size();
    vector<ll>up(n+2,0), down(n+2,0);
    for(int i=1;i<=n;i++){
            
    down[i] = down[i-1] + grid[1][i-1];
     
    cout<<"d:"<<down[i-1]<<" ";
   }
      cout<<"d:"<<down[n]<<" "<<"d:"<<down[n+1];
        cout<<endl;
        
     for(int i=n;i>=1; i--){
            
       up[i] = up[i+1] + grid[0][i-1];
            //cout<<"u:"<<up[i]<<" ";
            
      }
       
        for(int i=0;i<=n+1; i++)
           
        cout<<"u:"<<up[i]<<" ";
        cout<<endl;
        
        ll res= 1e12;
        ll ans= 0;
        
        
       for(int i=0;i<n;i++){
           
           ans = max(up[i+2],down[i]);
           res = min(res,ans);
           
      }
        
        return res;
        
    }
};