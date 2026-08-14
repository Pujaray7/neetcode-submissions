class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hash(nums.begin(), nums.end());
        int longest =0;
        for(int x:hash){
            if(hash.find(x-1)==hash.end()) {
            int len =1;
            int var = x;
            while(hash.count(var+1)){
                len++;
                var++;
            }
            longest = max(longest, len);
            }
        }
        return longest;
    }
};
