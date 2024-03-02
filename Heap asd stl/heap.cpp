#include <bits/stdc++.h>
using namespace std;

/*
when i=0 to i<n
left node= 2*i+1
right node= 2*i+2
root node=(i-1)/2
*/
class MaxHeap
{
public:
    vector<int> arr;

    MaxHeap()
    {
    }
    void insert(int x)
    {
        arr.push_back(x);
        up_heapify(arr.size() - 1);
    }
    void up_heapify(int i)
    {
        while (i > 0 && arr[i] > arr[(i - 1) / 2])
        {
            swap(arr[i], arr[(i - 1) / 2]);
            i = (i - 1) / 2;
        }
    }
    void PrintHeap()
    {
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    void down_heapify(int i)
    {
        while (1)
        {
            int largest = i;
            int left = 2 * i + 1;
            int right = 2 * i + 2;

            if (left < arr.size() && arr[largest] < arr[left])
                largest = left;
            if (right < arr.size() && arr[largest] < arr[right])
                largest = right;
            if (largest == i)
                break;
            swap(arr[i],arr[largest]);
            i=largest;
        }
    }
    void Delete(int i)
    {
        swap(arr[i], arr[arr.size() - 1]);
        arr.pop_back();
        down_heapify(i);
    }
    int GetMax()
    {
        if(arr.empty())
        {
            cout<<"Heap is empty!.\n";
            return -1;
        }
        return arr[0];
    }
    int ExtactMax()
    {
        int max=arr[0];
        Delete(0);
        return max;
    }

};

int main()
{
    MaxHeap heap;
    heap.insert(4);
    heap.insert(7);
    heap.insert(9);
    heap.insert(10);
    heap.insert(1);
    heap.insert(15);
    heap.insert(55);
    cout<<"Max element: "<<heap.GetMax()<<endl;
    heap.PrintHeap();
    heap.ExtactMax();
    cout<<"Extract Max element: "<<heap.GetMax()<<endl;
    
    heap.PrintHeap();
    heap.Delete(0);
    heap.PrintHeap();
    return 0;
}
