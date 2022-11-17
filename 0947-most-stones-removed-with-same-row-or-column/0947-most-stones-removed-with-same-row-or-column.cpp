class Solution {
public:
    int cnt;
    vector<int> v;
    void dfs(int curr, vector<vector<int>> &a){
        v[curr] = 1;
        for(int i = 0; i < a.size(); ++i){
            if(!v[i] and (a[curr][0] == a[i][0] or a[curr][1] == a[i][1])){
                dfs(i, a);
            }
        }
    }
    int removeStones(vector<vector<int>>&a) {
        int n = a.size();
        v.assign(n, 0);
        cnt = 0;
        for(int i = 0; i < n; ++i){
            if(!v[i]){
                ++cnt;
                dfs(i, a);
            }
        }
        return n - cnt;
    }
};