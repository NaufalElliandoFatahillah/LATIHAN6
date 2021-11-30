#include<iostream>
using namespace std;

int main()
{
	int arr[5] = {7,5,3,4,6};
	bool swapped;
	int temp;
	int indexOfLastUnsertedElement = 4;
	
	do{
		swapped = false;
		for(int i=0; i<indexOfLastUnsertedElement;i++){
			if(arr[i]>arr[i+1]){
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
				swapped = true;
			}
		}
	}while(swapped);
	
	for(int i=0;i<5;i++){
		cout << arr[i] << " ";
	}
}
