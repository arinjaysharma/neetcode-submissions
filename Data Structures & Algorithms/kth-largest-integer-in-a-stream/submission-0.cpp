class KthLargest {
public:
priority_queue<int, vector<int> , greater<int>> pq ; 
int rank; 
    KthLargest(int k, vector<int>& nums) {
        rank = k ; 

        for(int i = 0 ; i<nums.size(); i++)
        {
            pq.push(nums[i]); 
            if(pq.size()>k)
            {
                cout<<"Popping "<<pq.top()<<endl;
                pq.pop();
            }

        }
        
    }
    
    int add(int val) {
        pq.push(val); 
            if(pq.size()>rank)
            {
                cout<<"Popping "<<pq.top()<<" as heap is full"<<endl;
                pq.pop();
            }
            return pq.top();
        
    }
};
