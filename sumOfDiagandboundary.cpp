#include<iostream>
using namespace std;
#include<cstring>


char highestOccurringChar(char input[]) {
  /*char highChar[2] =  {input[0], '\0'};
  int highCharIndex = 1;
  int highCount = 1;
  for(int i = i, count = 1; input[i] != '\0'; i++){
          if(input[i] == highChar[0]){
                  count++;
          }
          else{
                  if(count > highCount){
                          highCount = count;
                          highCharIndex = i-1;
                          highChar[0] = input[i-1];
                          count = 1;
                  }else{
                          count = 1;
                  }
          }

  }
  return highChar[0];*/

  int i = 0, j = 1, count, maxCount = 1;
  char highChar[2] ={input[0], '\0'}
        for(; input[i] != '\0'; i++){
                count = 1; 
                for(int j = i+1; input[j] != '\0'; j++){
                        if(input[j] == input[i]){
                                count++;
                        }
                }
                if(count > maxCount){
                        maxCount = count;
                        highChar[0] = input[i];
                }
        }
}
int main()
{
	
		int n;
		cin >> n;
		int arr[501][501];

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> arr[i][j];
			}
		}
        
        cout << totalSum(arr, n) << endl; 
	
}