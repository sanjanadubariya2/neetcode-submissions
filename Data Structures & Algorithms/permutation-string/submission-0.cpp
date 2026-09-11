class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()){
            return false;
        }
        for(int i=0;i<=s2.size()-s1.size();i++){
            if (is_permutation(
                    s1.begin(),
                    s1.end(),
                    s2.begin() + i,
                    s2.begin() + i + s1.size())) {
                return true;
            }
        }
        return false;
    }
};
