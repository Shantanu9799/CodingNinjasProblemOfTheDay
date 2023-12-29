/* Beginner approach */
#include <bits/stdc++.h> 
void deleteMiddle(stack<int>&inputStack, int N){
   // Write your code here
   stack<int> helperStack;
   int elementToRemove = N/2;
   while(!inputStack.empty()) {
      if(elementToRemove == 0) {
         inputStack.pop();
         elementToRemove--;
         continue;
      }
      helperStack.push(inputStack.top());
      inputStack.pop();
      elementToRemove--;
   }

   while(!helperStack.empty()) {
      inputStack.push(helperStack.top());
      helperStack.pop();
   }
}