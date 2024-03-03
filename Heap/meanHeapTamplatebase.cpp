/**!
* author: dween_md
* created: 2024-03-02    20:21:59
!**/
#include <bits/stdc++.h>
#define ll       long long int
#define asc(v)   sort(v.begin(), v.end()) //vectors,pairs,tuples,string
#define dsc(v)   sort(v.begin(), v.end(), greater<int>())

using namespace std;

template <typename T>
class MinHeap {
private:
    vector<T> heap;

    void heapifyUp(int index) {
        int parent = (index - 1) / 2;
        while (index > 0 && heap[index] < heap[parent]) {
            swap(heap[index], heap[parent]);
            index = parent;
            parent = (index - 1) / 2;
        }
    }

    void heapifyDown(int index) {
        int leftChild = 2 * index + 1;
        int rightChild = 2 * index + 2;
        int smallest = index;

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
    void insert(const T& value) {
        heap.push_back(value);
        heapifyUp(heap.size() - 1);
    }

    void deleteAtIndex(int index) {
        if (index >= heap.size() || index < 0)
            throw out_of_range("Index out of range");

        heap[index] = heap.back();
        heap.pop_back();
        heapifyDown(index);
    }

    T getMin() const {
        if (heap.empty())
            throw logic_error("Heap is empty");
        return heap.front();
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    MinHeap<int> heap;
    heap.insert(4);
    heap.insert(7);
    heap.insert(9);
    heap.insert(10);
    heap.insert(1);
    heap.insert(15);
    heap.insert(55);

    cout << "Min element: " << heap.getMin() << endl;

    heap.deleteAtIndex(1); // Delete element at index 1

    cout << "Min element after deleting index 1: " << heap.getMin() << endl;

    return 0;
}
