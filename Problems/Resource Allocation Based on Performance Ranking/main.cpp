#include <bits/stdc++.h>
using namespace std;

vector<int> getResources(int inc, int dec, vector<int> &performance) {
    int n = performance.size();
    vector<pair<int, int>> perfWithIndex(n); // Store {performance, index}
    vector<int> rank(n); 
    vector<int> res(n);

    // Step 1: Store performance with original index
    for (int i = 0; i < n; i++) {
        perfWithIndex[i] = {performance[i], i};
    }

    // Step 2: Sort in descending order
    sort(perfWithIndex.rbegin(), perfWithIndex.rend());

    // Step 3: Assign ranks (1-based)
    int currentRank = 1;
    for (int i = 0; i < n; i++) {
        if (i > 0 && perfWithIndex[i].first != perfWithIndex[i - 1].first) {
            currentRank = i + 1;
        }
        rank[perfWithIndex[i].second] = currentRank;
    }

    // Step 4: Compute resources using rank formula
    for (int i = 0; i < n; i++) {
        int r = rank[i];
        res[i] = inc * r - dec * (r - 1);
    }

    return res;
}

int main() {
    int inc = 500, dec = 100;
    vector<int> performance = {3, 2, 4, 3, 5, 5};

    vector<int> result = getResources(inc, dec, performance);

    for (int r : result) {
        cout << r << " ";
    }

    return 0;
}
