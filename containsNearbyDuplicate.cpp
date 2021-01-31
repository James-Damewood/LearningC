class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        set<int> stored;
        
        /// Initialize
        
        for (int i = 0; i < min<int>(k+1,nums.size());i++) {
            if (stored.find(nums[i]) != stored.end()){
                return true;
            } else {
                stored.insert(nums[i]);
            }
        }
        
        if (nums.size()<=k){
            return false;
        }
        /// Pass through
        
        for (int back = 0; back < nums.size()-(k+1); back++) {
            
            stored.erase(nums[back]);
                
            if (stored.find(nums[back+k+1]) != stored.end()){
                return true;
            } else {
                stored.insert(nums[back+k+1]);
            }
            
        }
            
    
        return false;
    }
};
