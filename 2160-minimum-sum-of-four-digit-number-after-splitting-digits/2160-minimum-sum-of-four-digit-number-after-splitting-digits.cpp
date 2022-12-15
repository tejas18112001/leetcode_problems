class Solution {
public:
    int minimumSum(int num) {
       // int n = num.size() ;
        vector<int>arr ;
        while(num!= 0 )
        {
            arr.push_back(num %10) ;
            num = num /10 ;
        }
        sort(arr.begin() , arr.end()) ;
        int n1 = arr[0]*10 + arr[2] ;
        int n2 = arr[1]*10 + arr[3] ;
        cout<<n1<<" "<<n2;

        return n1+n2 ;
    }
};
 