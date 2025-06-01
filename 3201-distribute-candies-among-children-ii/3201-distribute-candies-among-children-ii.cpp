class Solution {
public:
    long long distributeCandies(int n, int limit) {
        long long ans=0;
        for(int i=0;i<=min(n,limit);i++){
            int  p=n-i;
            if(p>2*limit) continue; // not possible
            int maxi=min(p,limit);
            int mini=p-maxi;
            ans+=(maxi-mini+1);
        }
        return ans;
    }
};