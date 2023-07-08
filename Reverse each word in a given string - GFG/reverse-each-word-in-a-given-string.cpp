//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseWords (string s)
    {
        s.push_back('.');
        string str="";
        stack<char>st;
         for(int i=0;i<s.size();i++)
         {
             char ch=s[i];
             if(ch=='.')
             {
                 while(!st.empty())
                 {
                     char ch=st.top();
                     st.pop();
                     str.push_back(ch);
                 }
                 str.push_back('.');
             }
             else
             {
                 st.push(ch);
             }
         }
         str.pop_back();
        return str;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends