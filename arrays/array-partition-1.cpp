class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n=nums.size();
        if(!n)
        {
            return 0;
        }
        sort(nums.begin(),nums.end());

        int sum=0;
        for(int i=0;i<n;i=i+2)
        {

            sum+=nums[i];

        }
        return sum;
    }
};