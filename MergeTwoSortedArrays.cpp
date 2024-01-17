vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    int i = 0, j = 0;
    vector<int> sortedA;
    while(i < a.size() && j < b.size()) {
        if(a[i] < b[j]) {
            auto it = find(sortedA.begin(), sortedA.end(), a[i]);
            if(it == sortedA.end())
                sortedA.push_back(a[i]);
            i++;
        } else {
            auto it = find(sortedA.begin(), sortedA.end(), b[j]);
            if(it == sortedA.end())
                sortedA.push_back(b[j]);
            j++;
        }
    }

    while(i < a.size()) {
        auto it = find(sortedA.begin(), sortedA.end(), a[i]);
        if(it == sortedA.end())
            sortedA.push_back(a[i]);
        i++;
    }

    while(j < b.size()) {
        auto it = find(sortedA.begin(), sortedA.end(), b[j]);
        if(it == sortedA.end())
            sortedA.push_back(b[j]);
        j++;
    }

    return sortedA;
}