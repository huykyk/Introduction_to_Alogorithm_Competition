#include <cstdio>

int main()
{
    int i, j, k;
    // 对最小的数进行枚举：123到329（最大的数为987，故为987/3=329）
    for (i = 123; i <= 329; i++)
    {
        j = i * 2;
        k = i * 3;
        // 抓住主要特征：所谓不重复的数字就等价于数字之和为45
        if (i / 100 + i / 10 % 10 + i % 10 + j / 100 + j / 10 % 10 + j % 10 + k / 100 + k / 10 % 10 + k % 10 == 45)
            printf("%d %d %d\n", i, j, k);
    }
    return 0;
}