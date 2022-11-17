class Solution {
public:
//     int c;
//     int n ;
   
    
//     void dsf(int index , vector<vector<int>>&a , vector<bool>&visit )
//     {
//         visit[index] = true;
//         for(int i = 0 ; i< n ; i++)
//         {
//             if(visit[i] ==false && (a[index][0] == a[i][0] || a[index][1] == a[i][1]) )
//                 dsf(i , a,visit );
//         }
//     }
   
//     int removeStones(vector<vector<int>>&a) {
//          n = a.size();
//          c = 0 ;
//          vector<bool>visit(n , false);
        
//         for(int i = 0 ; i<n ; i++)
//         {
//             if(visit[i] == false){
//              c++ ;
//             dsf(i , a , visit);
//             }
            
//         }
        
//        return n-c ;
//     }
    
    
    //to find the root user
    
    struct DisjointSet{
        vector<int> parent;
        vector<int> size;
        
        DisjointSet(int maxSize){
            parent.resize(maxSize);
            size.resize(maxSize);
            for(int i = 0; i < maxSize; ++i){
                parent[i] = i;
                size[i] = 1;
            }
        }
        
        int find_set(int x){
            if(x == parent[x])return x;
            return parent[x] = find_set(parent[x]);
        }
        
        void union_set(int a, int b){
            a = find_set(a);
            b = find_set(b);
            if(a != b){
                if(size[a] < size[b])swap(a, b);
                parent[b] = a;
                size[a] += size[b];
            }
        }
    };
    
    int removeStones(vector<vector<int>>&a){
        int n = a.size();
        set<int>s;
        
        DisjointSet dsu(n);
        
        for(int i = 0 ; i<n ; i++)
        {
            for(int j = i+1; j < n; ++j){
                if(a[i][0] == a[j][0] or a[i][1] == a[j][1]){
                    dsu.union_set(i, j);
                }
            }
        }
        
        
        
        for(int i = 0 ; i<n;i++)
        {
            s.insert(dsu.find_set(i));
        }
        
        
        
        
        return n - s.size();
    }
};


