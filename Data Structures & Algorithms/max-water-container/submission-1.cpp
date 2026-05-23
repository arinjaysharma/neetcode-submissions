class Solution {
public:
    int maxArea(vector<int>& nums) {
        
int area = 0 ; 
        for(int i = 0 ; i<nums.size(); i++)
        {
            for(int j = i ;  j <nums.size(); j++)
            {
                int b = min( nums[i],nums[j]) ;
                int l = abs(j-i) ; 
                area= max(area, l*b); 

            }
        }
        return area; 

    }
};
