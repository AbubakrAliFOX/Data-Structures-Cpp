#include <iostream>
#include <stack>
using namespace std;


int main () {

    stack <int> Numbers;

    Numbers.push(10);
    Numbers.push(20);
    Numbers.push(30);
    Numbers.push(40);
    Numbers.push(50);
    Numbers.push(60);

    cout << "Count: " << Numbers.size() << endl;

    while (!Numbers.empty())
    {
        cout << Numbers.top() << endl;
        Numbers.pop();
    }
     
    return 0;
}