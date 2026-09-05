#brute force
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n = nums.size();
        for(int val:nums)

    {
        int freq=0;
        for(int el:nums)
        {
            if(val==el)
            {
                freq++;
            }
        }
        if(freq>n/2)
        return val;
    }
    return -1;
    }
};
#moore's algo
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
       int ans=0, freq=0;
       for(int i=0; i<nums.size(); i++)
       {
        if(freq==0)
        ans= nums[i];

        if(ans== nums[i])
        {
            ans= nums[i];
            freq++;}
            else 
            freq--;
        

       }
       return ans;
    }
};
