#include <iostream>
#include <vector>
using namespace std;
// Sorted and Rotate array:
bool check(int arr[], int size)
{
    int count = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            count++;
        }
    }
    if (arr[size - 1] > arr[0])
    {
        count++;
    }
    return count == 1;
}
// Rotate an array:
void rotate_array(int arr[], int size, int key)
{
    // Create a temporary array to store rotated elements
    int temp[size];
    // Copy the elements to the temporary array with rotation
    for (int i = 0; i < size; i++)
    {
        temp[(i + key) % size] = arr[i];
    }
    // Copy the rotated elements back to the original array
    for (int i = 0; i < size; i++)
    {
        arr[i] = temp[i];
    }
}
// Printing array after sorted:
int printingArray(int arr[], int size)
{
    cout << "Printing the array after sorted " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Value of index " << i << " is: ";
        cout << arr[i] << endl;
    }
}
int main()
{
    // Size of an array:
    int size1;
    cout << "Enter the size of an array: ";
    cin >> size1;
    // Creating an array:
    int arr1[100];
    for (int i = 0; i < size1; i++)
    {
        cout << "Value of index " << i << " is: ";
        cin >> arr1[i];
    }
    // Enter the key:
    int key;
    cout << "Enter the key value: ";
    cin >> key;
    // Calling function to rotate the array:
    rotate_array(arr1, size1, key);
    printingArray(arr1, size1);

    // Size of an array:
    int size2;
    cout << "Enter the size of an array: ";
    cin >> size2;
    // Creating an array:
    int arr2[100];
    for (int i = 0; i < size2; i++)
    {
        cout << "Value of index " << i << " is: ";
        cin >> arr2[i];
    }
    if (check(arr2, size2))
    {
        cout << "Yes, it's true " << endl;
    }
    else
    {
        cout << "No, it's not true" << endl;
    }
}