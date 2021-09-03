#include <iostream>
#include <unordered_map>
using namespace std;


int printAllSubarrays(int arr[], int n)
{
    int count=0;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;


        for (int j = i; j < n; j++)
        {

            sum += arr[j];


            if (sum == 0) {
                count++;
            }
        }
    }
    cout<< "Number of subarrays:" << count << endl;
}

int main()
{
    int arr[] = { 1, -1, -1, 1, 1, -1, 1, 1, -1, -1 };
    int n = sizeof(arr)/sizeof(arr[0]);

    printAllSubarrays(arr, n);

    return 0;
}
