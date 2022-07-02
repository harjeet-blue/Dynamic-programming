#include <bits/stdc++.h>

class DSU{

    public:
    long long nodes;
    long long connectedcmp;
    vector<long long> parent;
    vector<long long> size;

    DSU(long long n){
        nodes = n;
        connectedcmp = n;
        parent.resize(n+1);
        size.assign(n+1,1);
        make();
    }

    void make(){
        for(long long i = 1 ; i<= nodes ; i++){
            parent[i] = i;
        }
    }

    long long find(long long v){
        if(parent[v]==v)return v;
        return parent[v] = find(parent[v]);
    }

    void unite(long long a , long long b){
        a = find(a);
        b = find(b);
        if(a!=b){
            if(size[a]<size[b])swap(a,b);
            parent[b] = a;
            size[a]+=size[b];
            connectedcmp--;
        }
    }

    long long get_size(long long v){
        v = find(v);
        return size[v];
    }
};
