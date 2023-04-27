import java.util.* ;
import java.io.*; 
public class Solution
{
public static int squareRoot(int a)
    {
        // Write your code here.
        int ans =(int) Math.sqrt(a);

        /*
        if(a==0 || a== 1) {
            return a;
        }
        int ans = 0;
        for(int i=1; i<=a; i++) {
            if((i*i) == a) {
                ans = i;
                break;
            } else if((i*i) > a) {
                ans = i-1;
                break;
            }
        }
        */

        return ans;
    }
}
