#include <bits/stdc++.h>

using namespace std;

class Graph {
    private:
        int V;
        unordered_map <int, vector <int>> adj;
        
    public:
        Graph(int V);
        void addEdge(int v, int w);
        void DFS(int s);
        void BFS(int s);
};

Graph::Graph(int V) {
    this->V = V;
}

void Graph::addEdge(int v, int w) {
    adj[v].push_back(w);
}

void Graph::DFS(int start) {
    vector <int> visited;
    
    stack <int> stack;
    int curr_node;
    stack.push(start);
    
    while (!stack.empty()) {
        curr_node = stack.top();
        stack.pop();
        
        bool visit_flag = false;
        
        // Element not found
        if (find(visited.begin(), visited.end(), curr_node) == visited.end()) {
            cout << curr_node << " ";
            visited.push_back(curr_node);
            
            for (auto itr=adj[curr_node].begin(); itr != adj[curr_node].end(); ++itr) {
                stack.push(*itr);
            }
        }
    }
}

void Graph::BFS(int s) {
    vector <int> visited;
    queue <int> queue;
    
    queue.push(s);
    
    while (!queue.empty()) {
        int curr_node = queue.front();
        queue.pop();
        
        // Not visited
        if (find(visited.begin(), visited.end(), curr_node) == visited.end()) {
            visited.push_back(curr_node);
            cout << curr_node << " ";
            
            for (auto itr = adj[curr_node].begin(); itr != adj[curr_node].end(); ++itr) {
                queue.push(*itr);
            }
        }
        
    }
}

int main() {
    Graph g(5); // Total 5 vertices in graph 
    g.addEdge(1, 0); 
    g.addEdge(0, 2); 
    g.addEdge(2, 1); 
    g.addEdge(0, 3); 
    g.addEdge(1, 4); 
  
    cout << "Following is Depth First Traversal\n"; 
    g.DFS(0); 
    cout << endl;
    
    cout << "Following is Breadth First Traversal\n";
    g.BFS(0);
    cout << endl;
    return 0; 
}
