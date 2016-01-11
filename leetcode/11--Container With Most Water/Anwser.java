
class Anwser {
	/**
	 *时间复杂度O(n)
	 */
	public static int maxArea(int[] height) {
		int max = 0;
		int left = 0;
		int right = height.length-1;
		
		while(left < right) {
			max = Math.max(max, Math.min(height[left], height[right]) * (right - left));
			if(height[left] < height[right]) {
				left++;
			}else {
				right--;
			}
		}
		
		return max;
	}

	public static void main(String[] args) {
		int[] height = {1, 1};
		System.out.println(maxArea(height));
	}
}

