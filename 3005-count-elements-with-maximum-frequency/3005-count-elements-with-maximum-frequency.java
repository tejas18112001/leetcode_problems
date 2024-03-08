class Solution {
    public int maxFrequencyElements(int[] nums) {
        Map<Integer , Integer> mp = new HashMap<>() ;
       
        for(int i : nums) {
              mp.put(i, mp.getOrDefault(i, 0) + 1);
        }
        
        int maxfrq = 0 ; 
        
        for(Map.Entry<Integer , Integer> entry : mp.entrySet()) {
            maxfrq = Math.max(maxfrq , entry.getValue()) ;
        }
        
        int ans = 0 ; 
        
        for(Map.Entry<Integer , Integer>entry : mp.entrySet()) {
            if(entry.getValue() == maxfrq) {
                ans += maxfrq ;
            }
        }
        
        return ans ;
    }
        
        
     

}