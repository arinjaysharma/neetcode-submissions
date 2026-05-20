class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxHeap ; 
        for( auto x : stones)
        {
            maxHeap.push(x);
        }
        while(!maxHeap.empty())
        {
            if(maxHeap.size()==1)
        {
                return maxHeap.top();
        }
            int firstHeaviest = maxHeap.top();
            maxHeap.pop(); 
            int secondHeaviest = maxHeap.top();
            if(firstHeaviest == secondHeaviest )
            {
                maxHeap.pop();
            }
            else{

                int newWeight = abs(firstHeaviest-secondHeaviest);
                maxHeap.pop(); 
                maxHeap.push(newWeight);
            }

        }
        return 0 ; 
    }
};
