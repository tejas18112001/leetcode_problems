//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    
    static bool cmp(Item &a , Item&b) {
        double l1 = (double)a.value /  (double) a.weight ;
        double l2 = (double)b.value / (double)b.weight ;
        
        return l1 > l2 ;
    }
    
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
       
        sort(arr, arr+n , cmp) ;
        
     
        
        double ans = 0 ; 
        int w = 0 ;
           
          
           int i = 0 ;  
           while(i<n && w + arr[i].weight <= W) {
                
                w += arr[i].weight ;
                ans += arr[i].value ;
                i++ ;
            }
            
             if(i == n) return ans ;
             int remain = W - w;
             ans += ((double)arr[i].value / (double) arr[i].weight) * (double) remain;
         
         
          
        
        
        return ans ;
    }
        
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends