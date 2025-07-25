class Solution {
public:
    int maxSum(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> s;
        s.insert(nums[0]);
        int ans=nums[0];

        for(int i=1;i<n;i++){
            if(nums[i]>0 && s.find(nums[i])==s.end()){
                s.insert(nums[i]);
                ans=max(ans+nums[i],ans);
            }
            ans=max(ans,nums[i]);
        }
        return ans;
    }
};