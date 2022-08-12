class Solution {
public:
   int minOperations(vector<int>& nums) {
	int cnt = 0;
	for(int i = 1; i < size(nums); i++){
		cnt += max(0, nums[i - 1] + 1 - nums[i]);
        nums[i] = max(nums[i], nums[i - 1] + 1);
    }
	return cnt;
  }
};