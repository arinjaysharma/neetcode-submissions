class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        priority_queue<int, vector <int> , greater <int>> minHeap ; 

        for( int i = 0 ; i<nums.size(); i++)
        {
            if(i<k){
                cout<<"Adding to heap nums"<<i<<" "<<nums[i]<<endl;
            minHeap.push(nums[i]);
                        cout<<"Top of heap is now"<<minHeap.top()<<endl; 

        }
        if(nums[i]>minHeap.top() && i>=k)
        {
            cout<<nums[i]<<"more than"<<minHeap.top()<<endl;
            minHeap.pop();
            minHeap.push(nums[i]);
            cout<<"Top of heap is now"<<minHeap.top()<<endl; 
        }


        }

        return minHeap.top(); 

        
    }
};
