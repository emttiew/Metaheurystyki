#ifndef SOLUTION_H_
#define SOLUTION_H_

#include "graph.h"
#include <vector>
#include <iostream>

class greedy_solution_t {
public:
  std::shared_ptr<Graph> problem;
  edges_t nodes_to_color;
};

int goal(greedy_solution_t & sol);

greedy_solution_t & next_solution(greedy_solution_t & sol);
void graph_permutation(greedy_solution_t & sol);

#endif