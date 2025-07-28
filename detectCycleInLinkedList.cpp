#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

bool hasCycle(ListNode *head) {
    if (!head || !head->next) return false;

    ListNode *slow = head;
    ListNode *fast = head;

    while (fast && fast->next) {
        slow = slow->next;           // Move by 1 step
        fast = fast->next->next;     // Move by 2 steps

        if (slow == fast) {
            return true;             // Cycle detected
        }
    }

    return false; // No cycle
}

// Helper function to create a cycle for testing
void createCycle(ListNode *head, int pos) {
    if (pos == -1) return;

    ListNode *cycleNode = nullptr;
    ListNode *tail = head;
    int index = 0;

    while (tail->next) {
        if (index == pos) cycleNode = tail;
        tail = tail->next;
        index++;
    }

    tail->next = cycleNode;
}

int main() {
    // Create nodes
    ListNode *head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);

    // Create cycle at position 1 (0-based index)
    createCycle(head, 1);

    // Check for cycle
    if (hasCycle(head)) {
        cout << "Cycle detected in the linked list." << endl;
    } else {
        cout << "No cycle in the linked list." << endl;
    }

    return 0;
}
