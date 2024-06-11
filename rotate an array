class Solution
{
public:
    // Function to rotate an array by d elements in counter-clockwise direction.
    void reverse(int arr[], int i, int j)
    {
        for (; i <= (i + j) / 2; i++)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    void rotateArr(int arr[], int d, int n)
    {
        // code here
        d = d % n;
        reverse(arr, 0, n - 1);
        reverse(arr, 0, n - d - 1);
        reverse(arr, n - d, n - 1);
    }
};