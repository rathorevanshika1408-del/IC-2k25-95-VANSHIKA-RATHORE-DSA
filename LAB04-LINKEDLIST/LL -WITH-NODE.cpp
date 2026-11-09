created a node
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

int main() {
    Node* first = new Node(18);

    cout << first->data << endl;
    cout << first->next << endl;

    return 0;
}
output:
18
