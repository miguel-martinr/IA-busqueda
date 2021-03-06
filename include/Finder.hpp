/**
 * @author: Miguel Alejandro Martín Reyes
 * email : alu0101209777@ull.edu.es
 * @github: github.com/miguel-martinr
 * @date  : 20201110
 * @description: Clase que implementa un 'buscador' de caminos mínimos entre nodos.
 * 
 * @keywords: heuristic, A*, finder, AI, nodes, boards, game
 */
#pragma once

#include "Board.hpp"
#include "Heuristic.hpp"

#include <queue>
#include <string>
#include <ctime>



class Finder {
 public:
   Finder(Board* board = nullptr);
   ~Finder(void);

  
   bool a_star(coordinates start_pos, coordinates goal_pos, Heuristic* heuristic);
   void draw_path(Node* goal);
   vector<Node*> closed_list(void);
   double search_time(void);
   string time(void);

 private:
   Board* board_;
   vector<Node*> closed_list_; // Punteros a nodos que forman parte de la solución
   long double search_time_;   // Nº de ciclos que consumió la última búsqueda
};
