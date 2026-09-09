class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=*max_element(piles.begin(),piles.end());
        int res=r;

        while(l<=r){
            int mid=(r+l)/2;
            int ans=0;
            for(int p:piles){
                ans+=ceil((double)p/mid);
            }
            if(ans>h){
                l=mid+1;
            }else {
                res=mid;
                r=mid-1;
            }
        }
        return res;
    }
};
