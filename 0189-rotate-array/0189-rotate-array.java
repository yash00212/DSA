class Solution {
    public void rotate(int[] nums, int k) {
        int n = nums.length,i;
        k=k%n;
        int temp[] = new int[n];
        int index = 0;
        // last k elements
        for(i=n-k;i<n;i++){
            temp[index++] = nums[i];
        }
        // first n-k elements
        for(i=0;i<n-k;i++){
            temp[index++] = nums[i];
        }
        // again to nums
        for(i=0;i<n;i++){
            nums[i] = temp[i];
        }
    }
}