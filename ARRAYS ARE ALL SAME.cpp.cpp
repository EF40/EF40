#include<bits/stdc++.h>
using namespace std;

bool areAllElementsSame(const std::vector<int> &arr)
{

    int firstElement = arr[0];

    return all_of(arr.begin(), arr.end(), [firstElement](int element)
                       { return element == firstElement; });
}

int main()
{
    vector<int>a(5);
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    if (areAllElementsSame(a))
    {
        std::cout << "All elements in array1 are the same.\n";
    }
    else
    {
        std::cout << "Not all elements in array1 are the same.\n";
    }

    

    return 0;
}
