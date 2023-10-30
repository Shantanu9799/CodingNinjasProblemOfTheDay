int findTimeToReach(int n, int a, int b) {
  // Write your code here.
  int ans = 0;

  // a > b   -> elevator first goes up to n-1 & then back to destination
  if (a > b) {
    int elevatorComesTo0thFloor = a * 10;
    int elevatorComesToTopFloor = (n - 1 - a) * 10;
    int elevtorReachsDestination = (n - 1 - b) * 10;
    ans = elevtorReachsDestination + elevatorComesTo0thFloor +
          elevatorComesToTopFloor;
  }

  // b > a -> elevator simply goes to A then directly upards to b;
  if (b > a) {
    int elevatorComesTo0thFloor = a * 10;
    int elevtorReachsDestination = (b - a) * 10;
    ans = elevatorComesTo0thFloor + elevtorReachsDestination;
  }

  return ans;
}