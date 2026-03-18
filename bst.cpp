#include "bst.h"
#include <iostream>
#include <cstring>

using namespace std;

Node::Node(char value) {
  data = value;
  left = nullptr;
  right = nullptr;
}

BST::BST() {
  root = nullptr;
}

BST::~BST(){

}
