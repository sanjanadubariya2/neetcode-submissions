class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftprd(n);
        vector<int> rightprd(n);
        leftprd[0]=1;
        rightprd[nums.size()-1]=1;
        for(int i=1;i<nums.size();i++){
            leftprd[i]=nums[i-1]*leftprd[i-1];
        }
        for(int i=nums.size()-1;i>0;i--){
            rightprd[i-1]=nums[i]*rightprd[i];
        }
        vector <int> ans(n);
        for(int i=0;i<nums.size();i++){
            ans[i]=leftprd[i]*rightprd[i];
        }
        return ans;
    }
};
