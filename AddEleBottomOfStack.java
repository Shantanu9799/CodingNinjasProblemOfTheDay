import java.util.* ;
import java.io.*; 
public class Solution 
{
  public static Stack<Integer> pushAtBottom(Stack <Integer> myStack, int x) 
  {
    // Write your code here
    //approach - 1
    /* 
    int[] array = new int[myStack.size()];
    int i = 0;
    while(!myStack.empty()) {
      array[i++] = myStack.peek();
      myStack.pop();
    }
    myStack.push(x);
    for(i = array.length-1; i >= 0; i--) {
      myStack.push(array[i]);
    }
    return myStack;
    */
    
    //approach - 2
    /*
    myStack.add(0, x);
    return myStack;
    */
  }
}