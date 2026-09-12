class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;

        while (l < r) {
            int m = (l + r) / 2;
            if (nums[m] > nums[r]) {
                l = m + 1;
            } else {
                r = m;
            }
        }

        int pivot = l;
        int ans=binary_search(nums,0,pivot-1,target);
        if(ans==-1){
            return binary_search(nums,pivot,nums.size()-1,target);
        }
        return ans;
    }
    int binary_search(vector<int>& nums,int l,int r,int target){
        int mid=(r+l)/2;
        while(l<=r){
            mid=(r+l)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>target){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return -1;
    }
};
