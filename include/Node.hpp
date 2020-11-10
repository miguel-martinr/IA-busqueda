#pragma once

#include <iostream>

using namespace std;

enum node_type {free_, obstacle_, stepped_, initial_, final_};

const string FREE_SYM = "·";
const string OBSTACLE_SYM = "█";
const string STEPPED_SYM = "X";
const string INITIAL_SYM = "A";
const string FINAL_SYM = "B";
const string UNKNOWN_SYM = "?";

class Node {
 public:
   Node(int row = 0, int col = 0, node_type type = free_);
   
   ~Node(void);

   bool operator==(Node n);
   Node& operator=(const Node& n);
   int row_;
   int col_;
   double f_; //Costo estimado desde nodo inicial a nodo objetivo (g(n) + h(n))
   double h_; //Costo estimado desde este nodo al nodo objetivo
   double g_; //Coste desde el nodo inicial a este nodo
   node_type type_;
   bool is_closed_;
   bool is_frontier_;


   //ToDo: method char get_sym(type)
   friend ostream& operator<<(ostream& os, const Node* n);
   friend ostream& operator<<(ostream& os, const Node& n);
   Node* parent_;
};

