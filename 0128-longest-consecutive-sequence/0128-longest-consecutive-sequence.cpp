class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
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
};