class Solution {
public:
    string reorganizeString(string s) {
        map<char, int> mp;
        int maxi = 0;
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
            if (mp[s[i]] > maxi) {   
                maxi = mp[s[i]];
            }
        }

        if (maxi > (s.size() + 1) / 2) {
            return "";
        }

        priority_queue<pair<int, char>> pq; //max heap  
        for (auto i : mp) {
            pq.push({i.second, i.first}); //sort map using priority_Queue
        }

        string result = "";
        while (!pq.empty()) {
            pair<int, char> x = pq.top();
            pq.pop();
            result += x.second;

            if (!pq.empty()) {
                pair<int, char> sec = pq.top();
                pq.pop();
                result += sec.second;

                if (x.first > 1) {
                    pq.push({x.first - 1, x.second});// frequency kaam kar 
                }
                if (sec.first > 1) {
                    pq.push({sec.first - 1, sec.second});  // second charac frequency kaam karo 
                }
            }
        }
        return result;
    }
};