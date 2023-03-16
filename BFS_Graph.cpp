#include<bits/stdc++.h>
using namespace std;
class Graph{
    int no_of_nodes=0;
    int no_of_edges=0;
    bool visited_nodes[50];
    int adj_matrix[50][50];
    public:
    Graph(int v){
        no_of_nodes=v;
        for(int i=0;i<no_of_nodes;i++)
        {
            // cout<<"for i = "<<i<<endl;
            visited_nodes[i]=false;
            for(int j=0;j<no_of_nodes;j++){
                adj_matrix[i][j]=0;
            }
        }
    }
    void insert_edges(){
        int x,y;
        cout<<"Enter number of edges : ";
        cin>>no_of_edges;
        for(int i=0;i<no_of_edges;i++){
            cout<<"Enter edge : ";
            cin>>x>>y;
            adj_matrix[x][y]=adj_matrix[y][x]=1;
        }
    }
    void BFS(int starting_node){
        queue<int> q;
        visited_nodes[starting_node]=true;
        q.push(starting_node);
        // Find all adjecent of this node;
        while(!q.empty()){
            int temp = q.front();
            cout<<q.front()<<" ";
            q.pop();
            for(int i=0;i<no_of_nodes;i++){
                if(adj_matrix[temp][i]==1 && !visited_nodes[i]){
                    visited_nodes[i]=true;
                    q.push(i);
                }
            }            
        }
    }

};
int main()
{
    int ver,s;
    cout<<"Enter number of nodes = ";
    cin>>ver;
    Graph g(ver);
    g.insert_edges();
    cout<<"Enter starting node : ";
    cin>>s;
    g.BFS(s);
}