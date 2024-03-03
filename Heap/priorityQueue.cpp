/**!
* author: dween_md
* created: 2024-03-02    20:26:00
!**/
#include <bits/stdc++.h>
#define ll       long long int
#define asc(v)   sort(v.begin(), v.end()) //vectors,pairs,tuples,string
#define dsc(v)   sort(v.begin(), v.end(), greater<int>())

using namespace std;

class PriorityQueue {
private:
    vector<int> heap;

    void heapifyUp(int index) {
        int parent = (index - 1) / 2;
        while (index > 0 && heap[index] < heap[parent]) {
            swap(heap[index], heap[parent]);
            index = parent;
            parent = (index - 1) / 2;
        }
    }

    void heapifyDown(int index) {
        int smallest = index;
        int leftChild = 2 * index + 1;
        int rightChild = 2 * index + 2;

        if (leftChild < heap.size() && heap[leftChild] < heap[smallest])
            smallest = leftChild;
        if (rightChild < heap.size() && heap[rightChild] < heap[smallest])
            smallest = rightChild;

        if (smallest != index) {
            swap(heap[index], heap[smallest]);
            heapifyDown(smallest);
        }
    }

public:
    void push(int value) {
        heap.push_back(value);
        heapifyUp(heap.size() - 1);
    }

    void pop() {
        if (heap.empty())
            throw logic_error("Priority queue is empty");

        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);
    }

    int top() const {
        if (heap.empty())
            throw logic_error("Priority queue is empty");
        return heap.front();
    }

    bool empty() const {
        return heap.empty();
    }
};

int main() {
    PriorityQueue pq;

    pq.push(3);
    pq.push(2);
    pq.push(5);
    pq.push(1);

    cout << "Top element: " << pq.top() << endl;
    pq.pop();

    cout << "Top element after pop: " << pq.top() << endl;
    pq.pop();

    cout << "Top element after pop: " << pq.top() << endl;

    return 0;
}