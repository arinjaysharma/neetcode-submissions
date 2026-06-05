class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0 ; 
        int r = s.size(); 

        while(l<r)
        {
            if( isalnum(s[l]) &&  isalnum(s[r]) && tolower(s[l])== tolower(s[r]) )
            {
                l++ ;r-- ;continue; 
            }
            if( isalnum(s[l]) &&  isalnum(s[r]) && tolower(s[l])!= tolower(s[r]) )
            {
                return false ;
            }
            
            if(!isalnum(s[l]))
            {
                l++;
            }
             if(!isalnum(s[r]))
            {
                r-- ; 
            }
        }
        return true ; 
        
    }
};
