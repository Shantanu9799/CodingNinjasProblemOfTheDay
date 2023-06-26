import java.io.*;
import java.util.* ;

import java.util.ArrayList;

public class Solution 
{
    public static ArrayList<Integer> majorityElementII(ArrayList<Integer> arr) 
    {
        // Write your code here.
        int ele1 = 0;
        int ele2 = 0;
        int cnt1 = 0;
        int cnt2 = 0;
        for(int i = 0; i < arr.size(); i++) {
           if(cnt1 == 0 && ele2 != arr.get(i)) {
               ele1 = arr.get(i);
               cnt1 = 1;
           } else if(cnt2 == 0 && ele1 != arr.get(i)) {
               ele2 = arr.get(i);
               cnt2 = 1;
           } else if(arr.get(i) == ele1) {
               cnt1++;
           } else if(arr.get(i) == ele2) {
               cnt2++;
           } else {
               cnt1--; cnt2--;
           }
            
        }

        ArrayList<Integer> list = new ArrayList<>();
        cnt1 = 0; cnt2 = 0;
        for(int i =0 ; i < arr.size(); i++) {
            if(arr.get(i) == ele1) {
                cnt1++;
            }
            if(arr.get(i) == ele2) {
                cnt2++;
            }
        }
        if(cnt1 > arr.size()/3) {
            list.add(ele1);
        }
        if(cnt2 > arr.size()/3) {
            list.add(ele2);
        }
        return list;
    }
}