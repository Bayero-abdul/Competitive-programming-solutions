#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
 
int reverseNumber(int num) {
    std::string numString = std::to_string(num);
    std::reverse(numString.begin(), numString.end());
    return std::stoi(numString);
}
 
int main() {
    int N;
    std::cin >> N;
    std::vector<int> out;
 
    for (int i = 0; i < N; ++i) {
        int a, b;
        std::cin >> a >> b;
 
        int reversedA = reverseNumber(a);
        int reversedB = reverseNumber(b);
        int sum = reversedA + reversedB;
 
        out.push_back(reverseNumber(sum));
    }
 
    for (auto x : out)
        std::cout << x << std::endl;
 
    return 0;
}