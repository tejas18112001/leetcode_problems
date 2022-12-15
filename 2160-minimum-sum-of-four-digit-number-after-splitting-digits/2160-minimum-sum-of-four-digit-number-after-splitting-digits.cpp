class Solution {
public:
    int minimumSum(int num) {
      
        // vector<int>arr ;
        // while(num!= 0 )
        // {
        //     arr.push_back(num %10) ;
        //     num = num /10 ;
        // }
        string arr = to_string(num) ;
        sort(arr.begin() , arr.end()) ;
        
        return (arr[0] -'0' + arr[1] - '0')*10 + arr[2]-'0'+arr[3]-'0' ;
    }
};
 