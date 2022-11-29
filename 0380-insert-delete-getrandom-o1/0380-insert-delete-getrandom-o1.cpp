class RandomizedSet {
    private:
     unordered_set<int>p;
public:
    RandomizedSet() {
       
    }
    
    bool insert(int val) {
        if(p.find(val) == p.end())
        {
            p.insert(val);
            return true ;
            
        }
      return false;
    }
    
    bool remove(int val) {
        if(p.find(val) != p.end())
        {
            
            p.erase(val);
            return true ;
        }
        return false;
    }
    
    int getRandom() {
        if(p.size()>0)
        {
       int idx = rand()%p.size();
       auto it = p.begin();
       for (int i = 0; i < idx; i++)
       {
           it++;
       }
         return *it;
            
        }
        
        return false;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */