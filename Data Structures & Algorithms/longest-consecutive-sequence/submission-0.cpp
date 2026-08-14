class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> hash(nums.begin(), nums.end());
        int longest =0;
        for(int x:nums){
            if(hash.count(x-1)) continue;
            int len =1;
            int var = x;
            while(hash.count(var+1)){
                len++;
                var++;
            }
            longest = max(longest, len);
        }
        return longest;
    }
};
