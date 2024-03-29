//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    
    static bool cmp(pair<int , int>&a , pair<int , int>&b) {
         if(a.second < b.second ) return true ;
         else if (a.second > b.second ) return false ;
         
         int diff = a.second - a.first ;
         int diff1 = b.second - b.first ;
         return diff < diff1 ;
         
         
         return false ;
    }
    
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        
         vector<pair<int , int>>p(n) ;
         for(int i = 0 ; i<n ; i++) {
            p[i]=    {start[i] , end[i] } ;
         }
         
         sort(p.begin() ,p.end() ,cmp ) ;
         
        //   for(int i = 0 ; i<n ; i++) {
        //      cout<<p[i].first <<"  "<<p[i].second<<endl ;
        //  }
         
         int lmt = p[0].second ;
         int cnt = 1;
         
         for(int i = 1 ; i<n ; i++) {
             if(lmt < p[i].first ) {
                 lmt = p[i].second ;
                 cnt ++ ;
             }
             
         }
         
         return cnt ;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends