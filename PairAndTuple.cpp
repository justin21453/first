#include <iostream>
#include <utility>
#include <tuple>
#include <string>
#include <stdexcept>
using namespace std;

int main()
{
    pair<int, double> p(10, 20.5);
    tuple<int, int, char, string> t(5, 12, 'A', "abc");

    cout << p.first << " ";
    cout << p.second << " ";
    cout << endl;
    cout << get<0>(t) << " ";
    cout << get<1>(t) << " ";
    cout << get<2>(t) << " ";
    cout << get<3>(t) << " ";
    cout << endl;

    return 0;
}
