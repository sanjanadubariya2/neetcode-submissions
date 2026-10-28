class Solution {
public:
    bool isPalindrome(string s) {
        string newstr="";
        for(auto str:s){
            if(isalnum(str)){
                newstr+=tolower(str);
            }
        }
        return newstr==string(newstr.rbegin(),newstr.rend());
    }
};
