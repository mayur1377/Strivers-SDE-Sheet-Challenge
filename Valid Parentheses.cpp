bool isValidParenthesis(string expression)
{
    stack<char>s;
    for(auto i : expression)
    {
        if(i=='(' or i=='{' or i=='[')
        {
            s.push(i);
        }
        else{
            if(s.size()==0) return false;
            else
            {
                if(s.top()=='(' and i==')') s.pop();
                else if(s.top()=='{' and i == '}') s.pop();
                else if(s.top()=='[' and i==']') s.pop();
                else return 0;
            }
        }
    }
    return s.size()==0;
}
// tc: o(n) , sc:o(n)
