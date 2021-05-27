#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solution(vector<int> *numbers);

int main()
{
    vector<int> nums;
    int temp;

    while (cin >> temp)
    {
        nums.push_back(temp);
    }

    solution(&nums);
    return 1;
}

void solution(vector<int> *numbers)
{
    for (size_t i = 0; i < (*numbers).size(); i++)
    {
        printf("%d\n", (*numbers).at(i));
    }
}
