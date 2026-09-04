class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xorr1 =0;
        int xorr2 =0;
        for(int i =0; i<nums.size(); i++){
            xorr1 ^=nums[i];
            xorr2^=(i+1);
        }
        return xorr2^xorr1;
    }
};
