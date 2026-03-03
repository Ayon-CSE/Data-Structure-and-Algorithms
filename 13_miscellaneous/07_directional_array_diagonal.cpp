void directionalArray() {
    int a, b, xk, yk, xq, yq;

    vector<int> dx = {-1,-1,1,1,1,1,-1,-1};//first priority
    vector<int> dy = {-1,1,1,-1,1,-1,1,-1};//second priority

    set<pair<int,int>> k,q;

    for(int i=0; i<8; i++) {
        k.insert({xk + dx[i], yk + dy[i]});
    }
    for(int i=0; i<8; i++) {
        q.insert({xq + dx[i], yq + dy[i]});
    }

    int ans = 0;
    for(auto &i : k) {
        if(q.find(i) != q.end()) ans++;
    }
}
