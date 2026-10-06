/*
 * Array Operations
 * ----------------
 * Basic operations performed on an array:
 * 1. Display
 * 2. Insert
 * 3. Delete
 * 4. Search
 *
 * Language: C++
 */

#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    cout << "Array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void insertElement(int arr[], int &n, int position, int value)
{
    for (int i = n; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position] = value;
    n++;
}

void deleteElement(int arr[], int &n, int position)
{
    for (int i = position; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;
}

int searchElement(int arr[], int n, int value)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;

    cout << "Initial ";
    display(arr, n);

    insertElement(arr, n, 2, 25);
    cout << "After insertion: ";
    display(arr, n);

    deleteElement(arr, n, 3);
    cout << "After deletion: ";
    display(arr, n);

    int value = 40;
    int position = searchElement(arr, n, value);

    if (position != -1)
    {
        cout << value << " found at index " << position << endl;
    }
    else
    {
        cout << value << " not found" << endl;
    }

    return 0;
}
