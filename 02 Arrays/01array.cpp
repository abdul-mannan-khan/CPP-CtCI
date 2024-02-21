#include<iostream>
using namespace std;

int main(){
	int n;
	cout << "Enter the no of students: ";
	cin >> n;
	cout << "students number recorded. " << endl;
	int marks[n] = {0};

	//Output
	// for(int i=0;i<n;i++){
	// 	cout << marks[i] <<" ,";
	// }

	cout << "===================================" << endl;
	cout << "Enter the marks for each student:" << endl;
	//Input
	for(int i=0; i<n; i++){
		// cout << i << endl;
		cout << "Student " << (i) << ": ";
		cin >> marks[i];

		marks[i] = marks[i]*2;
	}
	cout << "===================================" << endl;
	// Update 
  
	// Output
	for(int i=0;i<n;i++){
		cout << marks[i] <<" ,"<< endl;
	}

	cout << endl;

	return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;
//     cout << "You entered: " << number << endl;
//     return 0;
// }

// end of code 
// just another testing comment
