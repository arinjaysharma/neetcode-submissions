class Solution {
public:
    int lengthOfLongestSubstring(string s) { int size = s.size();if(s.size()<=1){return s.size();}
        int maxlen  =0 ; 
                unordered_map<char,int> freq ; 

                int l = 0 ; int r = 0 ;
                string sub = ""; 

                while(r<size)
                {
                
                if(freq.find(s[r])!=freq.end() && freq[s[r]]>=l)
                {
                    l=freq[s[r]]+1;
                }

                freq[s[r]]=r; 
                maxlen = max(maxlen, r-l+1);
                r++;

                }

return maxlen;

        
    }
};
