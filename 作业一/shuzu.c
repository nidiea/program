#include<iostream>

#define n 100

using namespace std;
void main()
{
    int a[n], b[n][n];
    int length, i, j, w = 0, p = 0, q = 0, temp, m;
    cout << "输入随机整数" << endl;
    for (length = 0;;)
    {
        cin >> a[length];
        length++;
        if (getchar() == '\n')
        {
            break;
        }
    }
    cout << "这个数组的长度为：" << length << endl;
    //求子数组
    for (i = 0; i<length; i++)//两次循环，进行排除法，判断每个数所构成的最大子数组
    {
        m = i;
        w = 0;
        j = 0;
        while (j <= length - 1)
        {
            w += a[m];
            b[i][j] = w;
            m++;
            if (m>length - 1)
            {
                m = 0;
            }
            j++;
        }
    }
 
    temp = b[0][0];
    for (i = 0; i<length; i++)//将每个数对应的最大子数组进行判断，最后得到整个整数组的最大子数组
    {
        for (j = 0; j<length; j++)
        {
            if (b[i][j]>temp)
            {
                temp = b[i][j];
                p = i;
                q = j;
            }
        }
    }
 
    cout << "最大子数组的值为：" << temp << endl;
    cout << "最大子数组中元素的下标位子置：" << endl;
    i = 0;
    while (i <= q)
    {
        cout << p << "  ";
        p++;
        if (p >= length)
        {
            p = 0;
        }
        i++;
    }
 
    cout << endl;
}