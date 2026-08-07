class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1 ;int r= 0 ;  
        for(auto pile: piles)
        {   
            r=max(r,pile); //maxRate will be that of highest elemtn
        }
        int ans = 0 ;
        while(l<=r)
        {
            int mid = l+ (r-l)/2 ; 
            if(canEat(piles,h,mid))
            {
                ans = mid  ; 
                r = mid-1 ;
            }
            else{
                    l = mid+ 1 ;
            }
        }
        return ans ;
    }
    bool canEat(vector<int>& piles, int h , int rate)
    {
        int timeTaken= 0 ; 
        for(int i = 0 ; i<piles.size(); i++)
        {
            timeTaken+= (piles[i]+rate-1)/rate;

        }

        return timeTaken<= h ; 

    } 
};
