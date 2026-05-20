class Solution {
public:
        unordered_map<int,int> occurence ; 
    bool isHappy(int n) {
        occurence[n]++ ; 
        if(n/10 == 0 && occurence.size()> 0 && occurence[n] > 1)
        {
            return false ;
        }
        else if(n/10 == 0 && n == 1)
        {
            return true; 

        }
        int temp = n ; 
        int c = 0 ; 
        while(temp!=0)
        {
            int digit = temp%10 ; 
            c+= digit*digit; 
            temp = temp/10 ; 
        }
        return isHappy(c); 
        
    }
};
