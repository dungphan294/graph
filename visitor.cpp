#include "visitor.h"

visitor::visitor(data::graph &graph) : m_graph{graph} {

}

// Searches the graph for a path from start_vertex to goal.
// Returns true if it was found, false otherwise
bool visitor::find_path(const string &start_vertex, const string &goal) {
    // TODO:
    //  Make sure that the correct result is returned (Activity 3)
    //  Colour the path (Activity 4)
    //  Make sure that no vertices are visited twice (Activity 5)
    //  Keep track of number of visits to avoid cycles (Activity 6)
    //  Colour the cycle (Activity 7)
    if (start_vertex == goal) return true;

    return false;
}

bool visitor::cycle_found() const {
    return m_cycle_found;
}

