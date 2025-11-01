#include <iostream>
using namespace std;
void getConcatenation(int arr1[], int n, int arr2[])
{
    // Loop to copy elements of arr1[] into arr2[] twice
    for (int i = 0; i < n; i = i + 1)
        {
        arr2[i] = arr1[i];
        arr2[i + n] = arr1[i];
    }
}

int main()
{
    int n;


    cout << "Enter number of elements in array: ";
    cin >> n;


    if (n <= 0)
        {
        cout << "Invalid array size!" << endl;
        return 0;
    }

    int arr1[1000]; // input array (max limit 1000 as per constraints)
    int arr2[2000];  // output array (2 * n elements)


    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i = i + 1)
        {
        cin >> arr1[i];
    }

    // Call the function to create concatenated array
    getConcatenation(arr1, n, arr2);

    // Print the final concatenated array
    cout << "Concatenated array: ";
    for (int i = 0; i < 2 * n; i = i + 1)
        {
        cout << arr2[i];
        if (i != 2 * n - 1)
            cout << " ";
    }

    cout << endl;
    return 0;
}
