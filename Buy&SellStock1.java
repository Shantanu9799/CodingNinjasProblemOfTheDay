import java.util.* ;
import java.io.*; 
import java.util.ArrayList;

public class Solution{
    public static int maximumProfit(ArrayList<Integer> prices){
        // Write your code here.
        int maxProfit = 0;
        int mini = prices.get(0);
        for(int i : prices) {
            mini = Math.min(mini, i);
            int profit = i - mini;
            maxProfit = Math.max(maxProfit, profit);
        }

        return maxProfit;
    }
}