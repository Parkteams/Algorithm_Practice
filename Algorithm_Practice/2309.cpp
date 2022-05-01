#include<iostream>
using namespace std;

int main()
{
    int arr[9] = { 0 };
    for (int i = 0; i < 9; i++)
        cin >> arr[i];
    int temp = 0;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 8 - i; j++) {

            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int sum = 0;
    for (int i = 0; i < 9; i++)
        sum += arr[i];
    
    int non_1 = 0;
    int non_2 = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = i+1; j < 9; j++)
        {
            int sum_H = 0;
            sum_H = sum - arr[i] - arr[j];
            if (sum_H == 100)
            {
                non_1 = i;
                non_2 = j;
                break;
            }
        }
        if (non_2 > 0) break;
    }
    
    for (int i = 0; i < 9; i++)
    {
        if (i == non_1 or i == non_2) continue;
        cout << arr[i] << endl;
    }

    return 0;
}