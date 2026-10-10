class Solution {
public:
    int maximum(vector<int>&arr){
        int maxi =0;
        for(int i =0; i<arr.size(); i++){
            maxi = max(maxi, arr[i]);
        }
        return maxi;
    }
    int totalTime(vector<int>& arr, int hour){
        int reqTime =0;
        for(int i =0; i<arr.size(); i++){
            reqTime +=(arr[i]+hour-1)/hour;
        }
        return reqTime;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low =1;
        int high = maximum(piles);
        int ans =0;
        while(low<=high){
            int mid = (low+high)/2;
            int timeReq = totalTime(piles, mid);
            
            if(timeReq<=h){
                ans = mid;
                high = mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};
