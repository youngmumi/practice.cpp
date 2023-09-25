#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <ctime>
using namespace std;

int main() {
    const int startingMoney = 50;
    const int targetMoney = 250;
    const int numSimulations = 1000;  // 시뮬레이션 횟수

    cout << "초기 금액 $50\n목표 금액 $250\n" << endl;

    srand(NULL);  // 난수 발생기 초기화

    int successCount = 0;

    for (int i = 0; i < numSimulations; i++) {
        int cash = startingMoney;

        while (cash > 0 && cash < targetMoney) {
            // 0.5의 확률로 1달러를 걸거나 잃습니다.
            if ((double)rand() / RAND_MAX < 0.5) {
                cash++;  // 이기면 1달러를 얻음
            }
            else {
                cash--;  // 지면 1달러를 잃음
            }
        }

        if (cash == targetMoney) {
            successCount++;
        }
    }

    float successProbability = static_cast<double>(successCount) / numSimulations;

    cout << "목표 금액 " << targetMoney << "에 도달하는 확률: " << successProbability * 100 << "%" << endl;

    system("pause");

    return 0;
}
