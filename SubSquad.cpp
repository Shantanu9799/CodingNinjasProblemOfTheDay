int subsquad(vector<int> &a) {
    // Write your code here.
    set<int> Set;
    for(int it : a) {
        Set.insert(it);
    }
    return Set.size();
}