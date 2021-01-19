class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int> jewel_dict;
        for (int i=0;i<jewels.size();i++){
            jewel_dict[jewels[i]] = 42;
        }
        
        int count = 0;
        
        for (int i=0;i<stones.size();i++){
            if (jewel_dict.find(stones[i]) != jewel_dict.end()){
                count += 1;
            }
        }
        
        return count;
    }
};
