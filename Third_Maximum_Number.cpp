int thirdMax(vector<int>& nums) {
        set<int> st;
        for(int n:nums){
            st.insert(n);
            if(st.size()>3)
                st.erase(st.begin());
        }
        return st.size()==3? *st.begin(): *st.rbegin();
}