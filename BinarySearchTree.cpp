#include <iostream>
using namespace std;

class Node
{
public:
    int info;
    Node *leftchild;
    Node *rightchild;

    // constructor for the node class
    Node()
    {
        leftchild = nullptr;  // initialize left child to null
        rightchild = nullptr; // initialize right child to null
    }
};

class BinaryTree
{
private:
    Node *ROOT;

    BinaryTree()
    {
        ROOT = nullptr; // initialize root to null
    }

    void insert(){
        int x;
        cout << "Masukkan nilai: ";
        cin >> x;

        // Step 1: Allocate memory for a new node
        Node *newNode = new Node();

        
    }
};
