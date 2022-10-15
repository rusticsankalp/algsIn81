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

    class AdjIterator
    {
        DenseGraph &G;
        int i,v;
        public:
        AdjIterator(DenseGraph &G, int v) :
        G(G), v(v), i(-1){}
        int beg() { i=-1;return nxt();}
        int nxt() {
            for(i++;i<G.V();i++)
                 if(G.adj[v][i] == true) return i;
            return -1;
        }
        bool end()
        {
            return i>=G.V();
        }
    };
    friend class AdjIterator;
};
