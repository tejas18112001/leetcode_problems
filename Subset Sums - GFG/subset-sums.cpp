//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
   
   vector<int>ans ;
   
   void solution(vector<int> &arr , int ind  , int n , int sum) {
       
       if(ind == n) {
           ans.push_back(sum) ;
           return ;
       }
       
       sum = sum + arr[ind] ;
       solution(arr , ind +1 , n , sum ) ;
       sum = sum - arr[ind] ;
       solution(arr , ind+1 ,  n , sum ) ;
       
   }
   
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        solution(arr , 0 ,N ,0) ;
        return ans ;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends