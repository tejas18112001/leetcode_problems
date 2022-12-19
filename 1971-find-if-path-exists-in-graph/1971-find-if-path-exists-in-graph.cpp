class Solution {
public:
    vector<int>visited ;
    int j = 1 ;
    vector<vector<int>>graph ;
    bool dfs(int source, int destination){
        
         if(source  == destination )
              return true ;
        if(visited[source])
            return false;
        
        vector<int>::iterator i;
        visited[source] = 1 ;
       
       
        for(i = graph[source].begin()  ; i != graph[source].end() ; i++){
          cout<<*i<<" ";
         
            if(dfs( *i , destination ) )
                return true; 
            
        }
        
        return false ;
    }
   
        bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        visited.resize(n , 0);
      
        graph.resize(n) ;
        for(int i = 0 ; i<edges.size() ; i++) {
            graph[edges[i][0]].push_back(edges[i][1]);
             graph[edges[i][1]].push_back(edges[i][0]);
        }
            return dfs(source ,destination) ;
    }
};