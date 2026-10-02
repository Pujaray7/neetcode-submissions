class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int ans =0;
        for(int i =0; i<operations.size(); i++){
            if(operations[i]=="+"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.push(a);
                int c = a+b;
                st.push(c);

            }
            else if(operations[i]=="C") st.pop();
            else if(operations[i]=="D"){
                int x = st.top();
               
                st.push(x*2);
            }
            else st.push(stoi(operations[i]));
        }
        while(!st.empty()){
            int x = st.top();
            st.pop();
            ans+=x;
        }
        return ans;
    }
};