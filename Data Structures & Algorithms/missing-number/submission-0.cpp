class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int max = nums.size();  int calc = 0 ; 
        for(auto num:nums)
        {
          calc+=num ; 
        }
      
        return abs(calc - max*(max+1)/2) ; 


        
    }
};
