#include<vector>
#include"Edge.h"

using namespace std;
class DenseGraph
{
    int vertices, edges;
    bool isDigraph{false};
    vector<std::vector<bool>> adj{};
public:
    DenseGraph(int v, bool digraph);
    int V ();
    int E();
    bool Directed();
    void Insert(Edge e);
};
