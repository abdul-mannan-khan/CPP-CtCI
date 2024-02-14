#include <iostream>
#include <vector>

using namespace std;

int main (){
    vector <int> vec {1,2,3,4,5};
    // cout<<vec.size() << endl; // shows how many elements are there in a vector

    vector <int> vec2 (100,5);
    int n = vec.size();
    // int n = sizeof(vec)/sizeof(int);
    // cout <<n<<endl;
    for (auto i = 0; i<n; i++ ){
        
        cout <<vec[i]<<endl;
    }

    vec.pop_back();
    vec.push_back(7);
    for (auto i = 0; i<n; i++ ){
        
        cout <<vec[i]<<endl;
    }

    return 0;
}
