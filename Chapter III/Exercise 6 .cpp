#include <iostream>
#include <string>

using namespace std;

class Node {
private:
    string name;
    float value;
    Node* parent;

public:
    Node() {
        name = "";
        value = 0.0;
        parent = NULL;
    }

    Node(string nodeName, float nodeValue, Node* parentNode) {
        name = nodeName;
        value = nodeValue;
        parent = parentNode;
    }

    Node* getParent() {
        return parent;
    }

    void setParent(Node* parentNode) {
        parent = parentNode;
    }

    void trace() {
        cout << "Node: " << name << endl;
        cout << "Value: " << value << endl;
        cout << "Parent: ";

        Node* currentNode = parent;
        while (currentNode != NULL) {
            cout << currentNode->name << " ";
            currentNode = currentNode->parent;
        }

        cout << endl;
    }
};

int main() {
    // T?o các d?i tu?ng Node
    Node* node1 = new Node("Node 1", 1.5, NULL);
    Node* node2 = new Node("Node 2", 2.7, node1);
    Node* node3 = new Node("Node 3", 3.2, node2);

    // Thi?t l?p node cha cho node1
//    node1->setParent(node3);

    // In ra thông tin và node cha c?a node3
    node3->trace();

    // Gi?i phóng b? nh?
    delete node1;
    delete node2;
    delete node3;

    return 0;
}

