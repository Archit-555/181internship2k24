#include <iostream>
#include <memory>
using namespace std;
struct Node {
    int data;
    shared_ptr<Node> next;
    Node(int data) : data(data), next(nullptr) {}
};
class LinkedList {
    shared_ptr<Node> head;
public:
    void insert(int data) {
        auto newNode = make_shared<Node>(data);
        if (!head) {
            head = newNode;
        } else {
            auto temp = head;
            while (temp->next) temp = temp->next;
            temp->next = newNode;
        }
    }
    void display() const {
        for (auto temp = head; temp; temp = temp->next)
            cout << temp->data << " -> ";
        cout << "null" << endl;
    }
    void deleteNode(int data) {
        if (!head) return;
        if (head->data == data) {
            head = head->next;
            return;
        }
        auto temp = head;
        while (temp->next && temp->next->data != data)
            temp = temp->next;
        if (temp->next) temp->next = temp->next->next;
    }
};
int main() {
    LinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.display();
    list.deleteNode(20);
    list.display();
    return 0;
}

