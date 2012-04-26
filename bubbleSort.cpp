//BubbleSort

#include <iostream>

int main()
{
    int toSort[9] = {33, 67, 20, 6, 14, 41, 7, 24, 200};
    int totalRuns = 0;

        for (int i = 0; i <= 8; i++) {
            std::cout << "In the first loop. i:" << i << std::endl;

            for (int j = 0; j <=8; j++) {
                std::cout << "In the second loop. j:" << j << std::endl;
                ++totalRuns;

                if (toSort[j] > toSort[j+1]) {
                    int tmp = toSort[j];
                    std::cout << "tmp: " << tmp << std::endl;

                    int tmp2 = toSort[j+1];
                    std::cout << "tmp2: " << tmp2 << std::endl;

                    toSort[j] = tmp2;
                    toSort[j+1] = tmp;

                    for (int x = 0; x <= 8; x++) {
                       std::cout << toSort[x] << " ";
                    }

                    std::cout << std::endl;
                }
            }
        }

    for (int i = 0; i <= 8; i++) {
        std::cout << toSort[i] << " ";
    }

    std::cout << "\n\ntotalRuns: " << totalRuns << std::endl;
    return 0;
}
