class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int>tracker ; 
        for(int i = 0 ; i<nums.size(); i++)
        {
            tracker[nums[i]]=i ; 
        }
         for(int i = 0 ; i<nums.size(); i++)
        {
            int keyToFind = target -nums[i]; 
            if(tracker.find(keyToFind)!=tracker.end())
            {
                return {i+1,1+tracker[keyToFind]};

            }
        }
        return {};

        
    }
};
