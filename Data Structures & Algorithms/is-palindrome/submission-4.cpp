class Solution {
public:
    bool isPalindrome(string s) {
       int i = 0 ; 
       int j = s.size()-1 ; string ns = "";
       for(auto str: s)
       {
        if(isalnum(str))
        {
            ns+=tolower(str);

        }
       }string ls = ns ; 
       reverse(ns.begin(),ns.end());
return  ls == ns;
    }
}
       ;
