class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end()); 
        unordered_map<int,int> mp ;         unordered_map<int,int> tracker ; 

        
    int n = nums.size();
        vector<vector<int>> output; 

    
    if (n < 3) return {}; 
    if (nums[0] > 0) return {}; 

   
    
        for( int i = 0 ;i<nums.size(); i++)
        {
mp[nums[i]]=i ; tracker[nums[i]]++;
        }
         if(tracker[0]>2)
    {
        output.push_back({0,0,0});
    }
        set<vector<int>> seto; 
        for(int i =0 ; i< nums.size(); i++)
        {
           
            for( int j = i+1; j<nums.size(); j++)
            {
               
                int target =  - (nums[i]+ nums[j]); 
                {
                    if(mp.find(target)!=mp.end() && target!=nums[i] && target!=nums[j])
                    {
                        int k = mp[target];

                        cout<<"i: "<<i<<" j: "<<j<<" k: "<<k<<" pushing "<<nums[i]<<" "<<nums[j]<<" "<<target<<endl;
                        vector<int> triplet ={nums[i],nums[j],target};sort(triplet.begin(),triplet.end());
                        seto.insert(triplet);

                    }
                }
            }
        }
        for(auto unique: seto)
        {
output.push_back(unique);
        }
         
        return output ; 
    }
};
