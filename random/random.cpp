#include <iostream>
#include <random>

int main()
{
    std::random_device rnd;
    std::mt19937_64 mt(rnd());

    // std::uniform_real_distribution<> rand1(1.0, 2.0);
    // for (int i = 0; i < 20; ++i)
    // {
    //     std::cout << rand1(mt) << std::endl;
    // }

    // std::normal_distribution<> norm(0.0, 0.2);
    // for (int i = 0; i < 20; ++i)
    // {
    //     std::cout << norm(mt) << std::endl;
    // }

    int sum0 = 0;
    int sum1 = 0;
    int sum2 = 0;
    int sum9997 = 0;
    int sum9998 = 0;
    int sum9999 = 0;
    std::uniform_int_distribution<> rand10000(0, 9999);
    for (int i = 0; i < 1000000; ++i)
    {
        int randnum = rand10000(mt);
        switch (randnum)
        {
        case 0:
            ++sum0;
            std::cout << randnum << std::endl;
            break;
        case 1:
            ++sum1;
            std::cout << randnum << std::endl;
            break;
        case 2:
            ++sum2;
            std::cout << randnum << std::endl;
            break;
        case 9997:
            ++sum9997;
            std::cout << randnum << std::endl;
            break;
        case 9998:
            ++sum9998;
            std::cout << randnum << std::endl;
            break;
        case 9999:
            ++sum9999;
            std::cout << randnum << std::endl;
            break;
        default:
            std::cout << randnum << std::endl;
            break;
        }
    }
    std::cout << std::endl;

    std::cout << "sum0 = " << sum0 << std::endl;
    std::cout << "sum1 = " << sum1 << std::endl;
    std::cout << "sum2 = " << sum2 << std::endl;
    std::cout << "sum9997 = " << sum9997 << std::endl;
    std::cout << "sum9998 = " << sum9998 << std::endl;
    std::cout << "sum9999 = " << sum9999 << std::endl;
}