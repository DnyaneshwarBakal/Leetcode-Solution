class Solution {
public:
    long long putMarbles(vector<int>& v, int k) {
            
            int n = v.size();
            
            long long  mxi = v[0] + v[n-1];  
            long long  mni = v[0] + v[n-1];  
            
            vector<long long > adjSum;  
            
            for(int i = 0;i<n-1;i++)
                    adjSum.push_back(v[i] + v[i+1]);   
            
            
            sort(adjSum.begin(),adjSum.end(),greater<int>());  
            
            
            
            for(int i = 0;i<k-1;i++)
                    mxi +=(long long) adjSum[i],  
                    mni +=(long long) adjSum[n-i-2];  
            
          
            
           
            
          
            return (mxi- mni); 
            
            
            
            
        
    }
};