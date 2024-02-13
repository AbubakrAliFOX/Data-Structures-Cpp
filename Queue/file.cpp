#include <iostream>
#include <queue>
using namespace std;


int main () {

    queue <int> Numbers1;

    Numbers1.push(10);
    Numbers1.push(20);
    Numbers1.push(30);
    Numbers1.push(40);
    Numbers1.push(50);
    Numbers1.push(60);

    cout << "Count: " << Numbers1.size() << endl;

    while (!Numbers1.empty())
    {
        cout << Numbers1.front() << endl;
        Numbers1.pop();
    }
     
    return 0;
}