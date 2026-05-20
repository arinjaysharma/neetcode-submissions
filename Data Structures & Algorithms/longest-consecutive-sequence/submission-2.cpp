class Solution {
public:
    int longestConsecutive(vector<int>& nums) {        if(nums.size()==0)return 0;

        if(nums.size()==1)return 1;

        unordered_set<int> numSet(nums.begin(), nums.end());
        int longest =1;

        for(int i = 0 ; i<nums.size(); i++)
        {
           if(numSet.find(nums[i]-1) != numSet.end())
           {
            int temp = nums[i]; 
            int current = 1 ; 
            while(true)
            {
                if(numSet.find(temp) != numSet.end())
                {
                    temp++; 
                    current++; 
                }
                else
                {
                    longest= max(longest, current);
                    break;
                }

            }


           }

        }
        return longest;
    }
};
