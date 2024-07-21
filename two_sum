class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            int right=nums[i];
            int left=target-right;
            if(mpp.find(left)!=mpp.end()){
                return {mpp[left],i};
            }
            mpp[right]=i;
        }return {-1,-1};

    }
};
