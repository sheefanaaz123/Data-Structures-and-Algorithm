// Online C++ compiler to run C++ program online
#include <iostream>
#include<unordered_map>
#include<list>
using namespace std;

class graph{
    public:
    unordered_map<int, list<int>> adj;
    void addedge(int u, int v, bool dir){
        adj[u].push_back(v);
        if(dir==0)
           adj[v].push_back(u);
    }
    void print(){
        for(auto i : adj){
            cout<<i.first<<"->";
            for(auto j : i.second){
                cout<<j<<",";
            }
            cout<<endl;
        }
    }
};
int main() {
    int n, m ,i, u, v;
    cin>>n;
    cin>>m;
    graph g;
    for(i=0; i<m; i++){
        cin>>u>>v;
        g.addedge(u,v,0);
    }
    g.print();

    return 0;
}
