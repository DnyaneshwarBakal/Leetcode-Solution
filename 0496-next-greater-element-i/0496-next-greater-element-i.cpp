class Solution {
public:
int solve(int key,vector<int> nums2)
{
    int ans=-1;
    for(int i=0;i<nums2.size();i++)
    {
        if(nums2[i]==key)return ans=i;
    }
    return ans;
}
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i=0;i<nums1.size();i++)
        {
            bool flag=1;
            int ele=solve(nums1[i],nums2);

            for(int j=ele;j<nums2.size();j++)
            {
                if(nums2[j]>nums1[i])
                {
                    ans.push_back(nums2[j]);
                    flag=0;
                    break; 
                    
                }
            }
             if(flag==1)
             {
                 ans.push_back(-1);
             }
        }
        return ans;
    }
};