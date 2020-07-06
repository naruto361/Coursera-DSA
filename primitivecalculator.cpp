#include <bits/stdc++.h>
using namespace std;
void primitive_calculator(int number)
{
    vector<int> min_steps(number + 1);
    vector<int> predecessor(number + 1);

    for (int i = 2; i <= number; i++) {
        min_steps[i] = min_steps[i-1] + 1;
        predecessor[i] = i - 1;
        if (i % 3 == 0) {
            if (min_steps[i/3] < min_steps[i]) {
                min_steps[i] = min_steps[i/3] + 1;
                predecessor[i] = i/3;
            }
        }
        if (i % 2 == 0) {
            if (min_steps[i/2] < min_steps[i]) {
                min_steps[i] = min_steps[i/2] + 1;
                predecessor[i] = i/2;
            }
        }
    }


    cout << min_steps[number] << "\n";

    list<int> sequence;
    for (int i = number; i != 0; i = predecessor[i]) {
        sequence.push_front(i);
    }
    for (auto it = sequence.begin(); it != sequence.end(); ++it) {
        cout << *it  << " ";
    }
}
int main()
{
    int number;
    std::cin>>number;
    primitive_calculator(number);
    return 0;
}