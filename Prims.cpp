//-------------------MINIMUM SPANNING TREE----------------

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int inf = 0x3f3f3f3f;

#define syncC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define io freopen("i.txt","r",stdin);freopen("o.txt","w",stdout);
#define f1(n,m) for(int i=n;i<=m;i+=1)
#define f2(n,m) for(auto n:m)
#define sq(a) ((a)*(a))

bool sortSec(const pair<int,int> &a,const pair<int,int> &b){return (a.second<b.second);}
ll solve(){};

#define V 5
 
int minKey(int key[], bool mstSet[]){
    int min = INT_MAX, min_index;
 
    for (int v = 0; v < V; v++){
        if (mstSet[v] == false && key[v] < min){
            min = key[v], min_index = v;
        }
    }
 
    return min_index;
}

int printMST(int parent[], int n, int graph[V][V]){
    cout<<"Edge   Weight\n";
    for (int i = 1; i < V; i++){
        printf("%d - %d    %d \n", parent[i], i, graph[i][parent[i]]);
    }
}
 
void primMST(int graph[V][V]){
    int parent[V]; 
    int key[V]; 
    bool mstSet[V]; 
 
    for (int i = 0; i < V; i++){key[i] = INT_MAX, mstSet[i] = false;}
 
    key[0] = 0; // --------source vrtx
    parent[0] = -1; // ---root node
 
    for (int count = 0; count < V - 1; count++){
        int u = minKey(key, mstSet);//-----minimum key vertex from the set of vertices(not included)
        mstSet[u] = true;

        for (int v = 0; v < V; v++){
            if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v]){
                parent[v] = u, key[v] = graph[u][v];
            }
        }
    }
    printMST(parent, V, graph);
}
 
int main(){     
/*      2    3
     (0)--(1)--(2)
     |   / \   |
    6| 8/   \5 |7
     | /     \ |
     (3)-------(4)
          9          */
    int graph[V][V] = { { 0, 2, 0, 6, 0 }, { 2, 0, 3, 8, 5 },
            { 0, 3, 0, 0, 7 }, { 6, 8, 0, 0, 9 }, { 0, 5, 7, 9, 0 }, };
 
    primMST(graph);
 
    return 0;
}