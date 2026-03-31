#include "bst.h"
#include <iostream>
#include <cstring>

using namespace std;

int main(){
  bst tree;
  char input[50];
  while (true) {
    cout << "what do you want" << endl;
    cin >> input;
    if (strcmp(input, "insert") == 0) {
      int value;
      cin >> value;
      tree.insert(value);
    }
    else if (strcmp(input, "remove") == 0) {
      int value;
      cin >> value;
      tree.remove(value);
    }
    else if (strcmp(input, "search") == 0) {
      int value;
      cin >> value;
      if (tree.search(value)) {
	cout << "found it" << endl;
      }
      else {
	cout << "didn't find it" << endl;
      }
    }
    else if (strcmp(input, "tree") == 0) {
      tree.tree();
    }
    else if (strcmp(input, "quit") == 0) {
      break;
    }
  }
}
