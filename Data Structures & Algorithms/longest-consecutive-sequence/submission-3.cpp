class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=1;
        int maxcount=1;
        int count=1;
        if(nums.empty()){
            return 0;
        }
        while(i<nums.size()){
            if (nums[i-1] == nums[i]) {
                i++;
                continue;              // Ignore duplicates
            }
            if(nums[i-1]+1==nums[i]){
                count++;
            }
            else{
                maxcount=max(count,maxcount);
                count=1;
            }
            i++;
        }
        maxcount=max(count,maxcount);
        return maxcount;
    }
};
