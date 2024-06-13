#include "topological_sort.h"

namespace algos {
    topological_sort::topological_sort(const data::graph &graph)
    : m_graph{graph} {

    }

    bool topological_sort::compute() {
        m_cycle_found = false;
        m_vertices.clear();
        // TODO (Activity 9):
        //  Run DFS on all unvisited vertices in the graph,
        //  keeping track of the post-order of the vertices.
        //  If a cycle is found, return false.
        //  Otherwise, reverse the post order and return true.
        return false;
    }

    const std::vector<std::string> &topological_sort::result() const {
        // The m_vertices contains the vertices in reverse post-order.
        return m_vertices;
    }

    void topological_sort::dfs(const std::string& vertex) {
        // TODO: Implement DFS, when a vertex is post-visited, store it
        //  in the vector m_vertices. (Activity 8)
        (void) vertex;
    }
} // algos