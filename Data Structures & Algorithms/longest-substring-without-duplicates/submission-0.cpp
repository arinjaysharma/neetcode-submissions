class Solution {
public:
    int lengthOfLongestSubstring(string s) { 
        int maxlen  = 0 ; 


        for(int i = 0 ; i<s.size(); i++)
        {
                string sub = "";
                unordered_map<char,int> freq ; 

            for(int j = i ; j<s.size(); j++)
            {
                freq[s[j]]++; 
                if(freq[s[j]]==2)
                {
                    break;
                }

                sub+=s[j];
            }
                maxlen= max(maxlen,(int)sub.size());

        }
        return maxlen;
    }
};
