class MinStack {
public:
    stack<long long> st;
    long long mini;
    MinStack() {
        mini = INT_MAX;
    }
    
    void push(int val) {
        if(st.empty()){
            st.push(val);
            mini = val;
        }
        else{
            if(val>mini) st.push(val);
            else{
                st.push(2LL*val-mini);
                mini = val;
            }
        }
    }
    
    void pop() {
        long long x = st.top();
        st.pop();
        if(x<mini){
            mini = 2LL*mini-x;
        }
    }
    
    long long top() {
        long long x = st.top();
        if(x>mini) return x;
        else{
            return mini;
        }
    }
    
    long long getMin() {
        return mini;
    }
};
