#include <vector>
#include <iostream>
using namespace std;

bool isMonotonic(vector<int> array);

int main()
{
    vector<int> input = { -1, -5, -10, -1100, -1100, -1101, -1102, -9001 };
    cout << boolalpha << isMonotonic(input);

    return 0;
}

bool isMonotonic(vector<int> array) {
    // Write your code here.
    bool decreasing = true;
    bool nondecreasing = true;
    for (int i = 1; i < array.size(); i++)
    {



        if (array[i - 1] > array[i])
            decreasing = false;



        if (array[i - 1] < array[i])
            nondecreasing = false;



    }
    return decreasing || nondecreasing;
}
