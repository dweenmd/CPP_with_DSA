/**!
* author: dween_md
* created: 2024-02-22    11:26:21
!**/

#include <bits/stdc++.h> 
#define ll long long int 
#define asc(v) sort(v.begin(), v.end()) 
#define dsc(v) sort(v.begin(), v.end(), greater<int>()) 

using namespace std;

class QUEUE
{
  int *array; // Array to store elements of the queue
  int start; // Index of the front element
  int end; // Index of the rear element
  int size; // Maximum size of the queue
  int currentSize; // Current number of elements in the queue

public:
  // Constructor to initialize the queue
  QUEUE(int size)
  {
    array = new int[size]; // Dynamically allocate memory for the array
    start = 0; // Initialize start index
    end = -1; // Initialize end index
    this->size = size; // Set the maximum size of the queue
    currentSize = 0; // Initialize current size to 0
  }

  // Method to insert an element at the rear of the queue
  void ENQUEUE(int val)
  {
    // Check if the queue is full
    if (currentSize == size)
    {
      cout << "Queue is full." << endl; // Display error message
      return; // Exit the method
    }
    end++; // Move the end index to the next position
    end = end % size; // Wrap around if end index exceeds the size
    array[end] = val; // Insert the value at the end of the queue
    currentSize++; // Increment the current size
  }

  // Method to remove an element from the front of the queue
  void DEQUEUE()
  {
    // Check if the queue is empty
    if (currentSize == 0)
    {
      cout << "Queue is empty." << endl; // Display error message
      return; // Exit the method
    }
    start++; // Move the start index to the next position
    start = start % size; // Wrap around if start index exceeds the size
    currentSize--; // Decrement the current size
  }

  // Method to get the current size of the queue
  int GETSIZE()
  {
    return currentSize;
  }

  // Method to get the element at the front of the queue
  int FRONT()
  {
    
    if (currentSize == 0)
    {
      return -404; // Return a special value indicating error
    }
    return array[start]; // Return the element at the front
  }
};

int main()
{
  QUEUE q(5); // Create a queue object with a maximum size of 5
  q.ENQUEUE(10); 
  q.ENQUEUE(20); 
  q.ENQUEUE(30); 
  q.ENQUEUE(40); 
  q.ENQUEUE(50);

  cout << q.GETSIZE() << endl; // Print the current size of the queue

  cout << q.FRONT() << endl; // Print the element at the front of the queue

  q.DEQUEUE(); // Dequeue an element
  cout << q.GETSIZE() << endl; // Print the current size of the queue
  cout << q.FRONT() << endl; // Print the element at the front of the queue

  return 0; 
}
