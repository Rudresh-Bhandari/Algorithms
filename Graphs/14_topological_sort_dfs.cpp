#include<iostream>
#include<map>
#include<list>
#include<queue>
using namespace std;

template<typename T>

class Graph{
    map<T,list<T>>l;

    public:
     void addEdge(T x , T y){
         l[x].push_back(y);
        //  l[y].push_back(x);
     }
     void dfs_helper(T src,map<T,bool>&visited,list<T> &ordering){
         visited[src]=true;

         for(T nbr: l[src]){
             if(!visited[nbr]){
                 dfs_helper(nbr,visited,ordering);
             }
         }
        // at this point 
         ordering.push_front(src);
         return;
     }
     void dfs(){
        map<T,bool>visited;
        list<T>ordering;
        // Mark all nodes as not visted in the beginning 
        for(auto p:l){
            T node=p.first;
            visited[node]=false;
        }
        // calling the helper function 
       for(auto p:l){
           T node =p.first;
           if(!visited[node]){
               dfs_helper(node,visited,ordering);
           }
       }
        // finally we can print the list
        for(auto node:ordering){
            cout<<node<<endl;
        }
     }
};

int main(){
    Graph<string>g;
    g.addEdge("Python","DataPreprocessing");
    g.addEdge("Python","PyTorch");
    g.addEdge("Python","ML");
    g.addEdge("DataPreprocessing","ML");
    g.addEdge("PyTorch","ML");
    g.addEdge("ML","DL");
    g.addEdge("DL","FaceRecog");
    g.addEdge("DataSet","FaceRecog");
    
    g.dfs();

    return 0;
}