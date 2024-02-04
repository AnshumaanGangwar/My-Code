#include<iostream>
using namespace std;
void merge(int arr1[], int size1, int arr2[], int size2, int ans[])
{
        int i = 0;
        int k = 0;
        int j = 0;
        for(;j < size1 && i < size2; )
        {
            if ( arr2[i] < arr1[j] )
            {
                ans[k] = arr2[i];
                i++;
                k++;
            }
            else
            {
                ans[k] = arr1[j];
                j++;
                k++;
            }
        }
            while(i < size2)
            {
                ans[k] = arr2[i];
                k++;
                i++;
            }   
            while(j < size1 )
            {
                ans[k] = arr1[j];
                k++;
                i++;
            }

}


int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size1;
		cin >> size1;

		int arr1[size1];

		for (int i = 0; i < size1; i++)
		{
			cin >> arr1[i];
		}

		int size2;
		cin >> size2;

		int arr2[size2];

		for (int i = 0; i < size2; i++)
		{
			cin >> arr2[i];
		}

		int ans[size1+size2];

		merge(arr1, size1, arr2, size2, ans);

		for (int i = 0; i < size1 + size2; i++)
		{
			cout << ans[i] << " ";
		}

		cout << endl;

	}
}

