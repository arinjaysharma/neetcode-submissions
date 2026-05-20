class MedianFinder {
public:
int overAllSize; 
priority_queue<int> maxHeap ; 
priority_queue<int,vector<int>, greater<int>> minHeap ; 

    MedianFinder() {
        overAllSize = 0 ; 
        
    }
    
    void addNum(int num) {
            cout<<"Inserting:  "<<num<<" maxHheap top: " << (maxHeap.size() > 0 ? maxHeap.top() : 0)<<"Minheap top: " << (minHeap.size() > 0 ? minHeap.top() : 0)<<endl;

        if(overAllSize == 0 )
{
    cout<<"Max heap: Adding "<<num<<endl;
        maxHeap.push(num);

}
else

 if (maxHeap.empty() || num <= maxHeap.top()) {
            maxHeap.push(num);
        } else {
            minHeap.push(num);
        }
        
        // Balance the heaps
        if (maxHeap.size() > minHeap.size()+1 ) {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        } else if (minHeap.size() > maxHeap.size()) {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
overAllSize++ ; 
        
    }
    
    double findMedian() {
        double val ;
        if(overAllSize%2==0)
        {
           cout<<"Fetching median overall size "<<overAllSize<<" minHeap: "<<(minHeap.size() > 0 ? minHeap.top() : 0)<<"maxHeap "<<maxHeap.top()<<endl;
            val = (minHeap.top() + maxHeap.top()) / 2.0;
        }
        else
        {
cout << "Fetching median overall size " << overAllSize
     << " minHeap: " << (minHeap.size() > 0 ? minHeap.top() : 0)<< " maxHeap: " << (maxHeap.size() > 0 ? maxHeap.top() :0)<< endl;
            val =(maxHeap.size() > 0  ? maxHeap.top() :minHeap.top());
        }
            return val;

        
    }
};
