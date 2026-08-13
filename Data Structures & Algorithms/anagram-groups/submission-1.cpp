class Solution {
public:
    string generateKey(string &word){
        vector<int> freq(26,0);
        for(int i =0; i<word.size(); i++){
            freq[word[i]-'a']++;
        }
        string key ="";
        for(int i =0; i<26; i++){
            key+="#"+to_string(freq[i]);
        }
        return key;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;
        for(int i=0; i<strs.size(); i++){
            string key = generateKey(strs[i]);
            mpp[key].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto &q: mpp){
            ans.push_back(q.second);
        }
        return ans;
    }
};
