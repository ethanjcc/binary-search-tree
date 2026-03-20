#include "bst.h"
#include <iostream>
#include <cstring>

using namespace std;

int main(){
  char input[50];
  cout << "what do you want" << endl;
  cin >> input;
  if (strcmp(input, "insert") == 0) {
    insert(Node* root, int value);
  }
  else if (strcmp(input, "remove") == 0) {

  }
  else if (strcmp(input, "search") == 0) {
    search(Node* root, int value) const;
  }
  else if (strcmp(input, "tree") == 0) {

  }
}
