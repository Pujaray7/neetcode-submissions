class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int len =0;
        int left =0;
        for(int right =0; right<s.size(); right++){
            if(!st.count(s[right])){
                len = max(len, right-left+1);
               
            }
            while(st.count(s[right])){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);

        }
        return len;
    }
};
