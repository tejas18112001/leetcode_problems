class Solution {
public:
    
    // o(nlog(n)) \U0001f449 Quick sort OR Mearge sort
    
    
    
    
    vector<int>arr ;
    
    void merge_array( int start , int end , int mid ) {
      
      int i = start, j = mid+1 , k = 0 ;
    //   vector<int>b(end - start + 1) ;
     int b[end - start +1] ;
      while(i <= mid && j <= end) {

         if(arr[i] < arr[j]) { 
           b[k] = arr[i] ;
           i++ ;
         }
         else {
            b[k] = arr[j] ;
           j++ ;
         }

         k++;
      }

       while(i<=mid) {
          b[k ] = arr[i] ;
          k++ , i++ ;
          
      }

      while(j<=end) {
        b[k] = arr[j] ;
        k++ , j++ ;
      }

      int ind = start ; 
      for(int i = 0 ; i<end-start+1; i++) {
        arr[ind] = b[i] ;
        ind++ ;
      }

}

void merge_sort( int start , int end) {
     if(start < end) {
          int mid = start + (end - start)/2 ;
          merge_sort(  start , mid) ;
          merge_sort( mid+1 , end) ;
          merge_array(start , end , mid ) ;
     }
}
    
//     void merge(vector<int>&nums , int start , int end  , int mid){
//         int i , j , k ;
//         i = start , j = mid + 1  , k = 0 ;
//         // int b[end-start +1] ;
//         vector<int>b(end - start +1 ) ;
//         while(i<= mid && j <= end) {
//             if(nums[i] < nums[j]) {
//                 b[k] = nums[i] ;
//                 i++ ;
//             }else {
//                 b[k] = nums[j] ;
//                 j++ ;
//             }
//             k++ ;
//         }
        
//         int ind = start ;
//         for(int i = 0 ; i< (end - start  +1) ; i++) {
//             nums[ind] = b[i] ;
//             ind ++ ;
//         }
//     }
    
    
    
//     void merge_sort(vector<int>&nums , int start , int end){
//         if(start  <end) {
//             int mid = start + (end - start)/2 ;
//             merge_sort(nums , start , mid) ; 
//             merge_sort(nums , mid+1 , end) ;
//             merge(nums , start , end , mid) ;
//         }
//     }
    
    
    
    
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size() ;
        arr.resize(n) ;
        for(int i = 0 ; i<n ; i++) {
            arr[i] = nums[i] ;
        }
        int start = 0 , end = n-1;
        //         // merge_sort(nums , start , end) ;
         merge_sort(start , end) ;
        for(int i = 0 ; i<n ; i++) {
            nums[i] =  arr[i] ;
        }
        
        // free(arr) ;
        return nums ;
    }
};