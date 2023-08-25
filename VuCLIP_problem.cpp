/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    // 234 , 321 , 234, 654 , 1  , 23 , 1334 , 678 , 899               654 , 1,23,1334,899
    
    
    vector<int>arr ;
    while(true) {
        int num ;
        cin>>num ;
        if(num <0)
           break ;
        arr.push_back(num) ;
    }
        for(int i = 1 ; i<arr.size() ; i++) {
        int dt1 = arr[i]/100 ;
        int dt2 = arr[i-1]/100 ;
        if((dt1<=9 && dt1>=1) && (dt2<=9 && dt2>=1)) {
            if(arr[i] > arr[i-1])
            {
                arr.erase(arr.begin()+i-1) ;
            } else {
                arr.erase(arr.begin() + i) ;
            }
            
            i-- ;
        }
    }
    
    
    for(int i = 0 ; i<arr.size() ; i++) {
        cout<<arr[i]<<endl ;
    }
    
    

    return 0;
}
