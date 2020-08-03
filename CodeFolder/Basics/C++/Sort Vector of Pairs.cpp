bool sortbysec(const pair<int,int> &a, 
               const pair<int,int> &b) {
    return a.second < b.second; 
}

vector<pair<int, int>> pairs;
//Sort by first element
sort(pairs.begin(), pairs.end());
//Sort by second element
sort(pairs.begin(), pairs.end(), sortbysec);