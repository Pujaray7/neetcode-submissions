class Solution {
public:
    void reverse(vector<int>& digits, int n){
       
        for(int i =0; i<n/2; i++){
            swap(digits[i],digits[n-1-i]);
        }
    }
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        reverse(digits, n);
        int carry =1;
        for(int i =0; i<n; i++){
            int sum = digits[i]+carry;
            digits[i]= sum%10;
            carry = sum/10;
        }
        if(carry)digits.push_back(carry);
        reverse(digits, digits.size());
        return digits;
    }
};
