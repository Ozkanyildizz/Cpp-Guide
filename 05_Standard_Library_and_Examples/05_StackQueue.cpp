#include <iostream>
#include <stack>
#include <queue>
using namespace std;

#if 0


int main() {
    cout << "=== std::stack ===" << endl;
    stack<int> stk;

    // Push elements
    stk.push(10);
    stk.push(20);
    stk.push(30);

    cout << "Stack elements (top to bottom): ";
    stack<int> tempStk = stk; // copy for display
    while (!tempStk.empty()) {
        cout << tempStk.top() << " ";
        tempStk.pop();
    }
    cout << endl;

    // Pop element
    stk.pop();
    cout << "Top after pop: " << stk.top() << endl;
    cout << "Stack size: " << stk.size() << endl << endl;

    cout << "=== std::queue ===" << endl;
    queue<int> q;

    // Enqueue elements
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Queue elements (front to back): ";
    queue<int> tempQ = q; // copy for display
    while (!tempQ.empty()) {
        cout << tempQ.front() << " ";
        tempQ.pop();
    }
    cout << endl;

    // Dequeue element
    q.pop();
    cout << "Front after pop: " << q.front() << endl;
    cout << "Queue size: " << q.size() << endl;

    return 0;
}
#endif // 0
