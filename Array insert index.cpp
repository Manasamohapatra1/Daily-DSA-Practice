class Solution
{
public:
    void insertAtIndex(int arr[], int sizeOfArray, int index, int element)
    {
        // Your code here
        for (int i = sizeOfArray - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
    }
};
