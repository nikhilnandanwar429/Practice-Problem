#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> mySet;
    mySet.insert(3);
    mySet.insert(1);
    mySet.insert(2);
    mySet.insert(3); // This duplicate element will not be added

    for (const auto& element : mySet) {
        cout << element << " ";
    }
    cout<<endl;
    cout<< "Size => "<< mySet.size() << endl;
    return 0;
}
