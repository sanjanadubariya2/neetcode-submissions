class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        unordered_map<char,char> close={
            {')','('},
            {'}','{'},
            {']','['}
        };
        for(char c:s){
            if(close.count(c)){
                if(!stack.empty()&&stack.top()==close[c]){
                    stack.pop();
                }else{
                    return false;
                }
            }else{
                stack.push(c);
            }
        }
        return stack.empty();
    }
};
