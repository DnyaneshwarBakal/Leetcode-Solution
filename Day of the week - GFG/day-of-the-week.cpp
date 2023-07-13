//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string getDayOfWeek(int d, int m, int year) {
        string weekday[7]={"Saturday","Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
        int mon;
        if(m>2)
            mon=m;
        else
        {
            mon = 12+m;
            year--;
        }
        int y = year%100; //last two dig
        int c = year/100; //first two dig
        int w = d+(13*(mon+1))/5 + y + y/4 + c/4 + c * 5;
        // cout<<w;
        return (weekday[w%7]);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int d,m,y;
        
        cin>>d>>m>>y;

        Solution ob;
        cout << ob.getDayOfWeek(d,m,y) << endl;
    }
    return 0;
}
// } Driver Code Ends