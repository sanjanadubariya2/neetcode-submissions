class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0;
        int ans=0;
        vector<int> freq(256, 0);
        while(r<s.size()){
            freq[s[r]]++;
            while(freq[s[r]]>1){
                freq[s[l]]--;
                l++;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        // ans=max(ans,r-l);
        return ans;
    }
};
