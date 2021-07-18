/*
난이도 : 2
Leetcode 35. Search Insert Position

sorted order를 이용하면 간편하다.
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) { 
        int ret = 0;
        
        for(int i = 0; i<nums.size(); i++){
            if(target == nums[i]){
                ret = i;
            }else if(target > nums[i]){
                ret = i+1;
            }
        }  
        
        return ret;
    }
};