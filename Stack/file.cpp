#include <iostream>
#include <stack>
using namespace std;

int main()
{

    stack<int> Numbers1;
    stack<int> Numbers2;

    Numbers1.push(10);
    Numbers1.push(20);
    Numbers1.push(30);
    Numbers1.push(40);
    Numbers1.push(50);

    Numbers2.push(60);
    Numbers2.push(70);
    Numbers2.push(80);
    Numbers2.push(90);
    Numbers2.push(100);

    Numbers1.swap(Numbers2);

    cout << "\nStack 1 after wap: " << endl;
    while (!Numbers1.empty())
    {
        cout << Numbers1.top() << endl;
        Numbers1.pop();
    }

    cout << "\nStack 2 after swap: " << endl;
    while (!Numbers2.empty())
    {
        cout << Numbers2.top() << endl;
        Numbers2.pop();
    }
    return 0;
}