#include <iostream>
#include "visitor.h"
#include "dot_writer.h"
#include "traversal_tester.h"

int main() {

    // NOTE: some of the tests below may cause the program to crash.
    //  uncomment the tests one by one.
    algos::traversal_tester::test_find_path_result();   // Activity 3
    algos::traversal_tester::test_path_colouring();     // Activty 4
    //algos::traversal_tester::test_avoid_cycle();    // Activity 5
    //algos::traversal_tester::test_detect_cycle();   // Activity 6
    //algos::traversal_tester::test_colour_cycle();   // Activity 7
    //algos::traversal_tester::test_post_order();    // Activity 8
    //algos::traversal_tester::test_topological_sort();   // Activity 9

    return 0;
}
