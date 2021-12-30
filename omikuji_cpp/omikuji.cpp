#include <iostream>
#include <random>

int main()
{
    std::random_device rnd;
    std::mt19937_64 mt(rnd());
    std::uniform_int_distribution<> rand7(1, 7);

    int answer;
    int num;

    std::cout << "おみくじプログラムでおみくじをしますか?" << std::endl;
    std::cout << "YESは1を、NOは他の数字を入力してください" << std::endl;

    std::cin >> answer;
    if (answer == 1)
    {
        std::cout << answer << "が入力されたためおみくじを始めます!" << std::endl;
        num = rand7(mt);

        switch (num)
        {
        case 1:
            std::cout << "大吉" << std::endl;
            break;
        case 2:
            std::cout << "中吉" << std::endl;
            break;
        case 3:
            std::cout << "小吉" << std::endl;
            break;
        case 4:
            std::cout << "吉" << std::endl;
            break;
        case 5:
            std::cout << "末吉" << std::endl;
            break;
        case 6:
            std::cout << "凶" << std::endl;
            break;
        case 7:
            std::cout << "大凶" << std::endl;
            break;
        }
    }
    else
    {
        std::cout << answer << "が入力されたためおみくじをやめます。" << std::endl;
    }
    return 0;
}