class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max;
        max = 0;
        for (int i = 0; i < accounts.size();i++) {
            int curr_wealth = 0;
            for (int j = 0; j < accounts[0].size();j++){
                curr_wealth += accounts[i][j];
            }
            if (curr_wealth > max){
                max = curr_wealth;
            }
        }
        
        return max;
    }
};
