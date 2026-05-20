class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int cary =1; 
        if(digits[digits.size()-1]<9)
        {
            digits[digits.size()-1]=digits[digits.size()-1]+1;return digits;
        }

        for(int i = digits.size()-1 ; i>=0; i--)
        {
            digits[i]=digits[i]+cary ; 
            if(digits[i]>9)
            {
                digits[i]=0;
                continue;
            }
            else{
                return digits; 
            }
        }
       digits.insert(digits.begin(), 1);
       return digits;
        
    }
};
