int findKthLargest(vector<int>& nums, int k) {
        multiset<int> st;
        for(int n:nums){
            st.insert(n);
            if(st.size()>k)
                st.erase(st.begin());
        }
        return st.size()==k? *st.begin(): *st.rbegin();
        
}