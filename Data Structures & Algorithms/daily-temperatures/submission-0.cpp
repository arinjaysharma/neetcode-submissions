class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        vector<int> output ; 
        for(int i = 0 ; i<nums.size(); i++)
        {
            int curDay = nums[i]; int k = 0 ; 
            for(int j = i+1 ; j<nums.size(); j++)
            {
                if(nums[j]>curDay)
                {
                    k=j ;
                    break; 
                }

            }
            output.push_back(max(k-i,0)); 
        }
        return output ; 
        
    }
};
