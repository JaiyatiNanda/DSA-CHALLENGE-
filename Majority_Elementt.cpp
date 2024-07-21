class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                cnt=1;
                el=nums[i];
            }
            else if(nums[i]==el){
                cnt++;
            }else{
                cnt--;
            }
            continue;
        }
        int ele=el; int cnt1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ele){
                cnt1++;
            }
            if(cnt1>=nums.size()/2){
                return ele;
            }
        }return -1;

        
    }
};
