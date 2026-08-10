class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int>hash;
        for(int i =0;i<nums.size(); i++){
            int rem = target-nums[i];
            if(hash.find(rem)!=hash.end()){
                ans.push_back(hash[rem]);
                ans.push_back(i);
                break;
            }
            hash[nums[i]]=i;
        }
        return ans;
    }
};
