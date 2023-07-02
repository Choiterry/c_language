//#include "dalgraph.h"
//#include "stack.h"
//#include "queue.h"
//#include <fstream>
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    cout << "20192647 최준혁\n" << endl;
//    const char* inFilename = "graph.txt";
//    ifstream ifs(inFilename);
//    assert(ifs);
//    int n;
//    ifs >> n;
//    dalgraph G(n);
//    cout << "Created graph; n = " << G.vertexsize() << endl;
//    // now read in the edges and add to the graph
//    int u, v;
//    while (ifs >> u) {
//        ifs >> v;
//        G.addedge(u, v);
//    }
//    cout << "edges in graph: m = " << G.edgesize() << endl;
//    int* vertices(new int[n]);
//    assert(vertices);
//    for (u = 0; u < n; u++)
//        vertices[u] = 0;
//    for (u = 0; u < n; u++) {
//        neighboriter ni(G, u);
//        while ((v = ++ni) != n)
//            vertices[v]++;
//    }
//    Stack < int > s;
//    for (u = 0; u < n; u++)
//        if (vertices[u] == 0)
//            s.push(u);
//    if (s.isEmpty()) {
//        cout << "graph has a cycle!\n";
//        return 0;
//    }
//    int count = 0; // number of vertices found so far
//    Queue < int > sortededges;
//    while (!s.isEmpty()) {
//        count++;
//        u = s.pop();
//        sortededges.enQueue(u);
//        // reduce in count for u's neighbors;// for each that goes to zero, put on stack
//        neighboriter ni(G, u);
//        while ((v = ++ni) != n) {
//            --vertices[v];
//            if (vertices[v] == 0)
//                s.push(v);
//        }
//    }// check results
//    if (count < n)
//        cout << "Couldn't complete top sort --cycle present.\n";
//    cout << "Ordering for top sort: \n";
//    while (!sortededges.isempty())
//        cout << sortededges.deQueue() << '\t';
//    cout << endl;
//    return n;
//}