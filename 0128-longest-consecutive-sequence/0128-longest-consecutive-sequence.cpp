class Solution {
public:
    int solve(vector<int>nums)
    {
          if(nums.size()==0)return 0;
        sort(nums.begin(),nums.end());
        int seq=1;
        int maxlen=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1]+1)
            {
                seq++;
                
            }
            else if(nums[i]==nums[i-1])continue;
            else
            {
                seq=1;
            }
           maxlen=max(maxlen,seq);
        }
        return maxlen;
    }
    int solve1(vector<int>nums)
    {
        if(nums.size()==0)return 0;
        int seq=1;
        unordered_set<int>st;
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }
        for(int i=0;i<nums.size();i++)
        {
            int start=nums[i];
            if(st.find(start-1)!=st.end())continue;
            while(st.find(start)!=st.end())
            {
                start++;
            }
            seq=max(seq,start-nums[i]);
            
        }
        return seq;
    }
    int longestConsecutive(vector<int>& nums) {
        return solve1(nums);
    }
      
};