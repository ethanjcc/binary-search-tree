struct Node {
  int data;
  Node* left;
  Node* right;
  Node(char value);
};

class bst {
 public:
  bst();
  ~bst();
  void bst:insert(int value) {
    root = insert(root, value);
  }
  void remove(int value);
  bool search(int value) const;
  void tree() const;
 private:
  Node* root;
  Node* insert(Node* root, int value);
  Node* remove(Node* root, int value);
  bool search(Node* root, int value) const {
    return search(root, value);
  }
  void tree(Node* root, int depth) const;
};
