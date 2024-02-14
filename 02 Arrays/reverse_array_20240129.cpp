#include <iostream>
using namespace std;


int* reverse_array(int *array, int n=0){
    int  j = 0;
    int temp[n] {0};
    for (int i=n-1;i>=0; i--){
        temp[j] = array[i];
        ++j;
    }

    for(int i=0; i<n; i++){
		// cout << temp[i] << " ";
        array[i] = temp[i];
	}
    return array;

}

int main (){
    int arr[] = {10,20,30,45,60,80,90, 100, 110, 200, 250};
	int n = sizeof(arr)/sizeof(int);

	//Print the Output
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	cout <<endl;

	reverse_array(arr,n);

	//Print the Output
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	cout <<endl;

	return 0;

}