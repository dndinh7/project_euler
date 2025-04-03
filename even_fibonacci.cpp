
#include <iostream>

int main() {

    int prev= 1;
    int cur= 2;

    int sum= 0;

    while (cur < 4000000) {
        if (cur % 2 == 0) {
            sum+= cur;
        }

        int temp= cur;
        cur= cur + prev;
        prev= temp;
    }

    std::cout << "this is sum: " << sum << std::endl;

    return 0;
}