class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double,vector<int>>> pq ; 

        for(auto point : points)
        {
            pq.push({calculateDistance(point), point});
            if(pq.size()>k)
            {
                pq.pop();
            }
            
        }
vector<vector<int>> output ; 
while(!pq.empty())
{
    output.push_back(pq.top().second); 
    pq.pop();
}




        return output; 
        
    }
    double calculateDistance(vector<int> point1 )
    {
        int x1 =point1[0]; 
        int y1 = point1[1]; 
        double dist = sqrt(x1*x1 + y1*y1);
        return dist ;
    }
};
