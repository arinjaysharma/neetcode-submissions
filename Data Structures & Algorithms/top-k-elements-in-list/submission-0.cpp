class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>counter ; 
        for(int i = 0 ; i<nums.size(); i++)
{
    counter[nums[i]]++; 
}
 for (const auto& [key, value] : counter) {
        std::cout << key << ": " << value << std::endl;
    }
    cout<<"counterSize: "<<counter.size()<<endl;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    for( auto mp: counter)
    {
        pq.push({mp.second,mp.first});

        if(pq.size()>k)
        {
            cout << "Current pair being popped: (" << pq.top().first << ", " << pq.top().second << ")" << endl;
            pq.pop(); 
                    cout << "After popping : (" << pq.top().first << ", " << pq.top().second << ")" << endl;

        }
    }
    vector<int>output ; 
    while(!pq.empty())
    {
        output.push_back(pq.top().second);
                    pq.pop(); 
    }

    return output;
        
    }
};
