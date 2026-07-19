class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        vector<int> res(t.size());
        stack<int> st;

        for (int i = 0; i < t.size(); i++) {
            while (!st.empty() && t[i] > t[st.top()]) {
                int j = st.top();
                st.pop();
                res[j] = i - j;
            }

            st.push(i);
        }

        return res;
    }
};