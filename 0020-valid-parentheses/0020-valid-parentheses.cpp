class Solution {
public:
bool Match(char close,char open)
{
    if(close==')'&& open=='(') return true;
    else if(close==']'&& open=='[') return true;
    else if(close=='}' && open=='{') return true;
    return false;
}
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(ch=='['||ch=='{'|| ch=='(')
            {
                st.push(ch);
            }
            else
            {
                if(!st.empty()&&Match(ch,st.top()))
                {
                    st.pop();
                }
                else return false;

            }
        }
        if(!st.empty())return false;
        return true;
    }
};