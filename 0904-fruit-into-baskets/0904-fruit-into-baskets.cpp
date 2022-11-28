

/*
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        
        int i = 0 , j = 0  , cnt = 0 , n = fruits.size()  , res = INT_MIN ; 
        unordered_set<int>p;
        unordered_map<int,int>q ;
        
        while(j<n)
        {
            q[fruits[j]] ++ ;
            if(p.find(fruits[j]) == p.end())
            {
                
                p.insert(fruits[j]);
                if(p.size() > 2)
                {
                while(p.size()>2 && j>=i)
            {
                    
             
                    q[fruits[i]] --;
                    if(q[fruits[i]] == 0)
                        q.erase(fruits[i]) ;
                     i++ ;
            }
                
            }
                
            }
           
            res = max(res , j - i+1);
            j++;
        }
        return res ;
    }
};





*/








class Solution {
public:
    int totalFruit(vector<int>& tree) {
       unordered_map<int, int>cnt ;
        
        set<int> st;
        st.clear();
        
        int i, j;
        i = 0; j = 0;
        
        int ans = 0;
        
        while(j<tree.size()) {
            cnt[tree[j]] ++;
            if (st.find(tree[j]) == st.end()) {
                st.insert(tree[j]);
                if (st.size() > 2) {
                    while (st.size() > 2 && j >= i) {
                        cnt[tree[i]] --;
                        if (cnt[tree[i]] == 0) {
                            st.erase(tree[i]);
                        }
                        i ++;
                    }
                }
            }
            
            ans = max(ans, j-i + 1);
            j++ ;
        }
        
        return ans;
    }
};