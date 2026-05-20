class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq ; 
        for(auto stone:stones)
        {
            pq.push(stone); 
        }
        while(true)
        {
            if(pq.size()==0)
            {
                return 0 ; 
            }
            if(pq.size() ==1)
            {
                return pq.top();
            }
            
            int firstWeight = pq.top(); 
            pq.pop();
            int secondWeight = pq.top(); 
            if(abs(firstWeight-secondWeight)>0)
            {
                pq.pop();
                pq.push(abs(firstWeight-secondWeight));
            }
            else if(firstWeight==secondWeight)
            {
                pq.pop();
            }
        }
            return pq.top();

        
    }
};
