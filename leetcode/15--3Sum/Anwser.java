public List<List<Integer>> threeSum(int[] nums) {
	List<List<Integer>> result = new ArrayList<List<Integer>>();
	int len = nums.length;
	if(nums==null || len<3){
		return result;
	}
	
	Arrays.sort(nums);
	
	if(nums[len-1] <0 || nums[0]>0) {
		return result;
	}
	
	List<Integer> element = null;
	
	Set<Integer> numSet = new HashSet<Integer>();
	for(int i=0; i<len; i++) {
		numSet.add(nums[i]);
	}
	int index = 0;		
	
	for(index=0;index<len&&nums[index]<0;index++) {
		if(nums[index+1]==nums[index]) continue;
		int i=1;
		while(i<len&&nums[len-i]>0){
			if(nums[len-i]==nums[len-i-1]){
				i++;
				continue;
			}
			int tar = -(nums[index] + nums[len-i]);
			if(tar==nums[index]&&index>0&&tar==nums[index-1] ||
					tar==nums[len-i]&&i>1&&tar==nums[len-i+1] || 
							numSet.contains(tar) && tar>nums[index]&& tar<nums[len-i]){
				element = new ArrayList<Integer>();
				element.add(nums[index]);
				element.add(tar);
				element.add(nums[len-i]);
				result.add(element);
			}
			
			i++;
		}			
	}
	
	if(index<len-2&&nums[index]==0&&nums[index+1]==0&&nums[index+2]==0){
		element = new ArrayList<Integer>();
		element.add(0);
		element.add(0);
		element.add(0);
		result.add(element);
	}
	
	return result;
}