class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> mp ; 

        for(int i = 0 ; i< stones.size(); i++)
        {
            mp.push(stones[i]); 

        }
        while(1)
        {
             if(mp.size()<=1)
            {
                break ; 
            }
            int num1 = mp.top(); 
            mp.pop();
            int num2 = mp.top(); 
            mp.pop(); 
            if(num1==num2)
            {
                continue; 
            }
            else{
                mp.push(abs(num1-num2));
            }
           
        }
        if(mp.size()==0)
        {
            return 0 ;
        }
        return mp.top();
        
    }
};
