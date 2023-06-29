public class Solution 
{
    public static int[] nextGreaterElement(int[] arr, int n) 
    {
        // Write your code here.
        int[] ans = new int[n];
        for(int i = 0; i < n-1; i++) {
            for(int j = i+1; j < n; j++) {
                if(arr[j] > arr[i]) {
                    ans[i] = arr[j];
                    break;
                } else if(j == n-1){
                    ans[i] = -1;
                }
            }
        }
        ans[n-1] = -1;
        return ans;
    }
}
