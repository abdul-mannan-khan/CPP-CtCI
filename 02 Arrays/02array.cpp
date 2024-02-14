
#include<iostream>
using namespace std;

void printArray(int *arr,int n){


	cout <<"In Function "<<sizeof(arr) <<endl;
	// arr[0] = 100;
	for(int i=0;i<n;i++){
		cout << arr[i] <<endl; 
	}

}


int main(){

	int arr[] = {1,2,3,4,5,6};

	// int n = sizeof(arr)/sizeof(int);
	int n = sizeof(arr)/sizeof(arr[0]);
	std::cout<< "I am printing " << n << " array elements"<< std::endl;
	
	printArray(arr,n);
	
	cout <<"In Main sizeof array is: "<< n <<endl;
	for(int i=0;i<n;i++){
		cout << arr[i] <<endl; 
	}

	return 0;
}