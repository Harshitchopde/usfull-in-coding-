#include <bits/stdc++.h>

using namespace std;

class heap
{
public:
    int arr[100];
    int size = 0;  
    heap()
    {
        arr[0] = -1;
        size = 0;
    }
    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }
    void print()
    {

        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
    }
    void deletionHeap()
    {
        if (size == 0)
        {
            cout << "Nothing to delete" << endl;
            return;
        }
        // step 1
        // replace the first element with last element
        arr[1] = arr[size];
        // step 2 :
        // delete the last element from the heap
        size--;
        // step 3:
        // take root to its correct position
        int i = 1;
        while (i < size)
        {
            int lftInd = 2 * i;
            int ritInd = 2 * i + 1;
            if (lftInd < size && arr[i] < arr[lftInd])
            {
                swap(arr[i], arr[lftInd]);
                i = lftInd;
            }
            if (ritInd < size && arr[i] < arr[ritInd])
            {
                swap(arr[i], arr[ritInd]);
                i = ritInd;
            }
            else
            {
                return;
            }
        }
    }
};

int main()
{
    // heap h;
    // h.insert(50);
    // h.insert(55);
    // h.insert(53);
    // h.insert(52);
    // h.insert(54);
    // h.print();
    // h.deletionHeap();
    // cout << endl;

    return 0;
}