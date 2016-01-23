 public static int threeSumClosest(int[] nums, int target) {
	int result = 0;
	int min = Integer.MAX_VALUE;
	
	Arrays.sort(nums);
	
	for(int i=0; i<nums.length; i++) {
		int j = i+1;
		int k = nums.length-1;
		while(j < k) {
			int sum = nums[i] + nums[j] + nums[k];
			int diff = Math.abs(target-sum);
			if(diff==0) return sum;
			if(diff < min) {
				min = diff;
				result = sum;
			}
			if(sum<target) {
				j++;
			}else {
				k--;
			}
		}
	}
	return result;
}