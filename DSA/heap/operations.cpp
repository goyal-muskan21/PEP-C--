#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

class MinHeap {
public:
    MinHeap() {}

    void insert(int element) {
        heap.push_back(element);
        heapifyUp(heap.size() - 1);
    }

    int extractMin() {
        if (heap.empty()) {
            throw out_of_range("Heap is empty");
        }
        if (heap.size() == 1) {
            int root = heap[0];
            heap.pop_back();
            return root;
        }

        int root = heap[0];
        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);
        return root;
    }

private:
    vector<int> heap;

    void heapifyUp(int index) {
        int parentIndex = (index - 1) / 2;
        if (index > 0 && heap[index] < heap[parentIndex]) {
            swap(heap[index], heap[parentIndex]);
            heapifyUp(parentIndex);
        }
    }

    void heapifyDown(int index) {
        int smallest = index;
        int leftChild = 2 * index + 1;
        int rightChild = 2 * index + 2;

        if (leftChild < heap.size() && heap[leftChild] < heap[smallest]) {
            smallest = leftChild;
        }

        if (rightChild < heap.size() && heap[rightChild] < heap[smallest]) {
            smallest = rightChild;
        }

        if (smallest != index) {
            swap(heap[index], heap[smallest]);
            heapifyDown(smallest);
        }
    }
};

int main() {
    MinHeap minHeap;
    int choice, element;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Insert an element\n";
        cout << "2. Extract minimum element\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter element to insert: ";
                cin >> element;
                minHeap.insert(element);
                cout << "Element inserted successfully.\n";
                break;

            case 2:
                try {
                    element = minHeap.extractMin();
                    cout << "Minimum element extracted: " << element << std::endl;
                } catch (const std::out_of_range& e) {
                    cout << "Heap is empty.\n";
                }
                break;

            case 3:
                cout << "Exiting...\n";
                return 0;

            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}
