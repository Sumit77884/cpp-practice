#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
using namespace std;
class Graph{
    public:
    //first int ->u
    //second int ->v;
    //third int ->wt
    unordered_map<int,list<pair<int,int>>> adjList;
    void addEdge(int u,int v,int weight,bool direction){
        if(direction==0){//it mean undirected graph
            adjList[u].push_back({v,weight});
            adjList[v].push_back({u,weight});
        }
        else{
            //directed edge
            adjList[u].push_back({v,weight});
        }
    }
    void printAdjList(int n){
        for(int i=0;i<n;i++){
            cout<<i<<": ";
            cout<<"{ ";
            list<pair<int,int>>temp=adjList[i];
            for(auto j:temp){
                //j is a here
                cout<<"("<<j.first<<","<<j.second<<"), ";
            }
            cout<<"}"<<endl;
        }
    }
    void bfsTraversal(int src){
        queue<int>q;
        unordered_map<int,bool>visited;
        //initial state;
        q.push(src);
        visited[src]=true;
        while(!q.empty()){
            int frontNode=q.front();
            cout<<frontNode<<", ";
            q.pop();
            for(auto neighbour: adjList[frontNode]){
                //neighbour->pair
                //first->node
                //second ->weight
                int node=neighbour.first;
                int weight=neighbour.second;
                if(!visited[node]){
                    q.push(node);
                    visited[node]=true;
                }
            }
        }
        cout<<endl;
    }
    void dfsHelper(int src,unordered_map<int,bool>& visited){
        visited[src]=true;
        cout<<src<<", ";
        for(auto nbr:adjList[src]){
            int node=nbr.first;
            if(!visited[node]){
                dfsHelper(node,visited);
            }
        }
    }
    void dfsTraversal(int n){
        unordered_map<int,bool>visited;
        for(int src=0;src<n;src++){
            if(!visited[src])
             dfsHelper(src,visited);
        }

    }
};
int main(){
    Graph g;
    g.addEdge(0,1,5,1);
    g.addEdge(0,3,2,1);
    g.addEdge(1,2,6,1);
    g.addEdge(2,4,1,1);
    g.addEdge(3,2,4,1);
    g.addEdge(4,5,7,1);
    
    int n=6;
    g.printAdjList(n);
    cout<<"DFS: "<<endl;
    g.dfsTraversal(6);
    cout<<"BFS: "<<endl;
    g.bfsTraversal(0);
    return 0;
    
}