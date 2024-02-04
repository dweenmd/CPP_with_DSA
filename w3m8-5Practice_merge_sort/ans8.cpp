/*
Write a C++ program that returns the elements in a vector that
    are even numbered.
    1)Take 5 elements into a vector.
    2)Define a function named even_generator(), which receives a vector
    and returns a vector that only contains even numbers.
    
    Note: You don't need to take input from the userz.
*/
#include<bits/stdc++.h>

using namespace std;

// Function to filter even numbers from a vector
vector<int> even_generator(const vector<int>& input) {
    vector<int> result;
    for (int num : input) {
        if (num % 2 == 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    // Step 1: Take 5 elements into a vector
    vector<int> inputVector;
    cout << "Enter 5 elements: ";
    for (int i = 1; i <=15; ++i) {
        
        inputVector.push_back(i);
    }

    // Step 2: Call the even_generator function
    vector<int> resultVector = even_generator(inputVector);

    // Display the elements in the result vector
    cout << "Even elements: ";
    for (int num : resultVector) {
        cout << num << " ";
    }

    return 0;
}
