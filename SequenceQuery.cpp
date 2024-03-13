bool checkSequence(int a, int d, int x) {
    if (d == 0) {
        return a == x;
    }

    if (d < 0 && x < a) {
        // If d is negative and x is smaller than a,
        // the sequence will be decreasing and x cannot be found.
        return false;
    }

    int startD = 1, endD = ((x - a) / d) + 1;
    while (startD <= endD) {
        int midD = startD + (endD - startD) / 2;
        int seq = (a + (midD - 1) * d);
        if (seq == x) {
            return true;
        } else if (seq > x) {
            endD = midD - 1;
        } else {
            startD = midD + 1;
        }
    }

    return false;
}