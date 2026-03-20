#include "bst.h"
#include <iostream>
#include <cstring>

using namespace std;

Node::Node(char value) {
  data = value;
  left = nullptr;
  right = nullptr;
}

//constructor
bst::bst() {
  root = nullptr;
}

//destructor
bst::~bst() {

}

Node* bst::insert(Node* root, int value) {
  if (root == nullptr) {
    return new Node(value);
  }
  if (value < root->data) {
    root->left = insert(root->left, value);
  }
  else if (value > root->data) {
    root->right = insert(root->right, value)
  }
  return root;
}

bool bst::search(Node* root, int value) const {
  if (root == nullptr) {
    return false;
  }
  //not found
  if (value == root->data) {
    return true;
  }
  //found
  if (value < root->data) {
    return true;
  }
  else {
    return search(root->right, value);
  }
}
