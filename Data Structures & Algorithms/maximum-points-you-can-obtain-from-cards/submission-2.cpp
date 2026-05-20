class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int size = cardPoints.size(); 
        int sum = 0 ; int maxsum = 0 ; 
        int l = cardPoints.size() ; int r = k-1 ; 
        for(int i = 0 ; i< k ; i++)
        {
            sum+=cardPoints[i];
        }
        cout<<" intiial sum: "<<sum<<endl;
        if(k==size)return sum;
        while(r>=0)
        {
                        maxsum = max(sum,maxsum);

            sum-= cardPoints[r]; 
            r--; 
            l--; 
            sum+=cardPoints[l]; 
            maxsum = max(sum,maxsum);
        }
        return maxsum; 



        
    }
};