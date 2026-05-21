class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int size = nums.size(); int len = 0 ; int start = 0 ;

        for(int i = 0 ; i<nums.size(); i++)
        {
            int countzero = 0 ; int countone = 0 ; 
            for(int j = i ; j <nums.size(); j++)
            {
              
                 if(nums[j] == 0)
                {
                    // Check BEFORE incrementing if we've reached limit
                    if(countzero + 1 > k)
                    {
                        break;  // Can't add this zero
                    }
                    countzero++; 
                }
                
                
                if(nums[j]==1)
                {
                    countone++; 
                }
      len = max(len, countzero+countone);

          } 
        }
        return len ; 


    }
};