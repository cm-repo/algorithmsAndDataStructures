class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        for(int i=0; i < size; i++) {
            if(nums[i] == val) {
                nums[i] = nums[size-1];
                size = size -1;
                i = i-1;
            }
        } 
        return size;
    }
};
