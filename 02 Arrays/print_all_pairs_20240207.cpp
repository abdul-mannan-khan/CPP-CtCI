# include <iostream>

using namespace std;

int pair_array (int arr){
    
    int n = sizeof(arr);
    int new_arr [];
    for (int i=0;i<n; i++){
        for(int j = 0; j<n, j++){
            new_arr[i,j] = [arr[i],arr[j]];
        }
    }
    return new_arr;

}

int main (void){
    int arr [] = [1,2,3,4,5,6,7,8,9,10];
    int paired_arr [];

    paried_arr = pair_array(arr);

    for (i = 0; i< sizeof(arr), i++){
        cout<< paired_arr[i]<< endl;
    }
   

    return 0;
}