#include <iostream>
using namespace std;

int main (){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/(sizeof(arr[0]));
    int sum[size] {};
    int largest_sum {};

    for (int i = 0; i<size;i++){
        for (int j=i; j<size; j++){
            for (int k=i; k<=j; k++){
                cout << arr[k]<< ","; 
                sum[i] = sum[i]+arr[k];
            }
            cout << endl;
        }
        cout << "--------------------------------"<<endl;
        cout << sum[i] << endl;
        largest_sum = max(largest_sum,sum[i]);
    }
    
    cout << "----------LARGETST SUM----------"<<endl;
    cout << largest_sum << endl;
    cout << "--------------------------------"<<endl;
    return 0;
}