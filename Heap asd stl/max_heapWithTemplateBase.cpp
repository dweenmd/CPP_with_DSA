// Implement a template based Max-Heap with insert(value), delete(index), getMax() functions
/**!
* author: dween_md
* created: 2024-03-02    20:20:34
!**/
#include <bits/stdc++.h>

using namespace std;

template <typename T>
class MaxHeap
{
private:
    vector<T> heap;

    void heapifyUp(int index)
    {
        int parent = (index - 1) / 2;
        while (index > 0 && heap[index] > heap[parent])
        {
            swap(heap[index], heap[parent]);
            index = parent;
            parent = (index - 1) / 2;
        }
    }

    void heapifyDown(int index)
    {
        int leftChild = 2 * index + 1;
        int rightChild = 2 * index + 2;
        int largest = index;

        if (leftChild < heap.size() && heap[leftChild] > heap[largest])
            largest = leftChild;
        if (rightChild < heap.size() && heap[rightChild] > heap[largest])
            largest = rightChild;

        if (largest != index)
        {
            swap(heap[index], heap[largest]);
            heapifyDown(largest);
        }
    }

public:
    void insert(const T &value)
    {
        heap.push_back(value);
        heapifyUp(heap.size() - 1);
    }

    void deleteAtIndex(int index)
    {
        if (index >= heap.size() || index < 0)
            throw out_of_range("Index out of range");

        heap[index] = heap.back();
        heap.pop_back();
        heapifyDown(index);
    }

    T getMax() const
    {
        if (heap.empty())
            throw logic_error("Heap is empty");
        return heap.front();
    }
};

int main()
{
    MaxHeap<int> heap;
    heap.insert(4);
    heap.insert(7);
    heap.insert(9);
    heap.insert(10);
    heap.insert(1);
    heap.insert(15);
    heap.insert(55);

    cout << "Max element: " << heap.getMax() << endl;

    heap.deleteAtIndex(1); // Delete element at index 1

    cout << "Max element after deleting index 1: " << heap.getMax() << endl;

    return 0;
}
