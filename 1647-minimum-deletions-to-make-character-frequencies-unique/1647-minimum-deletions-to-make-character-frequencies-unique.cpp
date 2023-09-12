class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int>mp;
        for(auto i:s)
        {
            mp[i]++;
        }
        int cnt=0;
        unordered_set<int>st;
        for(auto i:mp)
        {
            int fre=i.second;
            while(fre>0&& st.count(fre))
            {
                fre--;
                cnt++;
            }
            st.insert(fre);
        }
        return cnt;
        
        
    }
};