#include <iostream>
#include <queue>
using namespace std;

int main()
{

    queue<int> Numbers1;
    queue<int> Numbers2;

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

    cout << "\nQueue 1 after wap: " << endl;
    while (!Numbers1.empty())
    {
        cout << Numbers1.front() << endl;
        Numbers1.pop();
    }

    cout << "\nQueue 2 after swap: " << endl;
    while (!Numbers2.empty())
    {
        cout << Numbers2.front() << endl;
        Numbers2.pop();
    }
    return 0;
}