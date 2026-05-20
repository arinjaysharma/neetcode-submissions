class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0 ; 
        int end = nums.size()-1; 
        while(start<=end)
        {
            
            long long  mid = start+ (end-start)/2 ; 
            int value = nums[mid]; 
            cout<<" mid: "<<nums[mid]<<" "<<mid<<endl;
                        cout<<" start: "<<nums[start]<<" "<<start<<endl;                        cout<<" end: "<<nums[end]<<" "<<end<<endl;


            if(value == target)
            {
                return mid ;
            }
            if(nums[start]<= target && target <= value)
            {
                cout<<"first half"<<endl;
                end = mid-1 ; 

            }
             else if(value< target && target<= nums[end])
            {                cout<<"second half"<<endl;

                start = mid + 1 ; 

            }
            else{
                return -1;
            }
            
        }
        return -1 ;
       
    }
};
