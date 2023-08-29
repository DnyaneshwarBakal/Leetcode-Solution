class Solution {
public:
    int bestClosingTime(string cus) {
        int sum=0;
        for(auto i:cus)
        {
            sum+=(i=='Y');
            
        }
        int k=0;
        int ans=0;
        int x=sum;
        for(int i=0;i<cus.size();i++)
        {
            if(cus[i]=='N')k++;
            if(cus[i]=='Y')sum--;
            if(sum+k<x)
            {
                x=sum+k;
                ans=i+1;
            }
        }
        return ans;
        
    }
};