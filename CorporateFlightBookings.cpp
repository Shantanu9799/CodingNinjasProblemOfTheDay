#include <bits/stdc++.h> 
vector< int > corpFlightBookings(vector< vector < int > > &bookings, int n) {
	// Write your code here.
	vector<int> reservedSeats(n, 0);
	for(int i = 0; i < bookings.size(); i++) {
		int first = bookings[i][0];
		int last = bookings[i][1];
		int seats = bookings[i][2];
		for(int j = first-1; j < last; j++) {
			reservedSeats[j] += seats;
		}
	}
	return reservedSeats;
}

// we are given the value of n, so we can create a vector/list of n integers filled with 0,
// then every time we can increase the value of the vector[first-1] to vector[last-1] value by seats. (as we're following the 0-based index)