#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    // Using a for loop to iterate through the elements of the vector
    for (int i = 0; i < v.size(); i++) {
        cout << "Element " << i << " = " << v[i] << std::endl;
    }

    return 0;
}
