class Solution {
public:
    int minCostToMoveChips(vector<int>& chips) {
        int odd=0,even=0;
        for(int i=0;i<chips.size();i++)
        {
            if(chips[i]%2==0)
            {
                even++;
            }
            else{
                odd++;
            }
        }
        return min(odd,even);
    }
};
