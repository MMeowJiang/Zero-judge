#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    while (1)
    {
        char test[10];
        cin >> test;

        if (test[0] == '#')
        {
            break;
        }
        else
        {
            int num1 = 0;
            int num2 = 0;
            int num3 = 0;
            char rome1[11] = {};
            char rome2[10] = {};
            char rome3[20] = {};
            char output[10] = {};
            strcpy(rome1, test);
            cin >> rome2;

            int i = 0;

            while (
                rome1[i] != '\0' &&
                rome1[i] != '\n')
            {
                switch (rome1[i])
                {
                case 'I':
                    if (rome1[i + 1] == 'V')
                    {
                        num1 += 4;
                        i += 2;
                    }
                    else if (rome1[i + 1] == 'X')
                    {
                        num1 += 9;
                        i += 2;
                    }
                    else
                    {
                        num1 += 1;
                        i++;
                    }
                    break;

                case 'V':
                    num1 += 5;
                    i++;
                    break;

                case 'X':
                    if (rome1[i + 1] == 'L')
                    {
                        num1 += 40;
                        i += 2;
                    }
                    else if (rome1[i + 1] == 'C')
                    {
                        num1 += 90;
                        i += 2;
                    }
                    else
                    {
                        num1 += 10;
                        i++;
                    }
                    break;

                case 'L':
                    num1 += 50;
                    i++;
                    break;

                case 'C':
                    if (rome1[i + 1] == 'D')
                    {
                        num1 += 400;
                        i += 2;
                    }
                    else if (rome1[i + 1] == 'M')
                    {
                        num1 += 900;
                        i += 2;
                    }
                    else
                    {
                        num1 += 100;
                        i++;
                    }
                    break;

                case 'D':
                    num1 += 500;
                    i++;
                    break;

                case 'M':
                    num1 += 1000;
                    i++;
                    break;
                }
            }

            i = 0;

            while (
                rome2[i] != '\0' &&
                rome2[i] != '\n')
            {
                switch (rome2[i])
                {
                case 'I':
                    if (rome2[i + 1] == 'V')
                    {
                        num2 += 4;
                        i += 2;
                    }
                    else if (rome2[i + 1] == 'X')
                    {
                        num2 += 9;
                        i += 2;
                    }
                    else
                    {
                        num2 += 1;
                        i++;
                    }
                    break;

                case 'V':
                    num2 += 5;
                    i++;
                    break;

                case 'X':
                    if (rome2[i + 1] == 'L')
                    {
                        num2 += 40;
                        i += 2;
                    }
                    else if (rome2[i + 1] == 'C')
                    {
                        num2 += 90;
                        i += 2;
                    }
                    else
                    {
                        num2 += 10;
                        i++;
                    }
                    break;

                case 'L':
                    num2 += 50;
                    i++;
                    break;

                case 'C':
                    if (rome2[i + 1] == 'D')
                    {
                        num2 += 400;
                        i += 2;
                    }
                    else if (rome2[i + 1] == 'M')
                    {
                        num2 += 900;
                        i += 2;
                    }
                    else
                    {
                        num2 += 100;
                        i++;
                    }
                    break;

                case 'D':
                    num2 += 500;
                    i++;
                    break;

                case 'M':
                    num2 += 1000;
                    i++;
                    break;
                }
            }

            if (num1 >= num2)
                num3 = num1 - num2;
            else
                num3 = num2 - num1;

            if (num3 == 0)
                cout << "ZERO\n";
            else
            {
                int j = 0;

                while (num3 >= 1000)
                {
                    rome3[j] = 'M';
                    num3 -= 1000;
                    j++;
                }

                while (num3 >= 500)
                {
                    rome3[j] = 'D';
                    num3 -= 500;
                    j++;
                }

                while (num3 >= 100)
                {
                    rome3[j] = 'C';
                    num3 -= 100;
                    j++;
                }

                while (num3 >= 50)
                {
                    rome3[j] = 'L';
                    num3 -= 50;
                    j++;
                }

                while (num3 >= 10)
                {
                    rome3[j] = 'X';
                    num3 -= 10;
                    j++;
                }

                while (num3 >= 5)
                {
                    rome3[j] = 'V';
                    num3 -= 5;
                    j++;
                }

                while (num3 >= 1)
                {
                    rome3[j] = 'I';
                    num3 -= 1;
                    j++;
                }

                int k = 0;

                for (i = 0; rome3[i] != '\0'; i++)
                {
                    if (
                        rome3[i] == rome3[i + 1] &&
                        rome3[i + 1] == rome3[i + 2] &&
                        rome3[i + 2] == rome3[i + 3])
                    {
                        switch (rome3[i])
                        {
                        case 'C':
                            if (rome3[i - 1] == 'D')
                            {
                                output[k - 1] = 'C';
                                output[k] = 'M';
                            }
                            else
                            {
                                output[k] = 'C';
                                output[k + 1] = 'D';
                                k++;
                            }
                            break;

                        case 'X':
                            if (rome3[i - 1] == 'L')
                            {
                                output[k - 1] = 'X';
                                output[k] = 'C';
                            }
                            else
                            {
                                output[k] = 'X';
                                output[k + 1] = 'L';
                                k++;
                            }
                            break;

                        case 'I':
                            if (rome3[i - 1] == 'V')
                            {
                                output[k - 1] = 'I';
                                output[k] = 'X';
                            }
                            else
                            {
                                output[k] = 'I';
                                output[k + 1] = 'V';
                                k++;
                            }
                            break;
                        }

                        i += 3;
                    }
                    else
                        output[k] = rome3[i];
                    k++;
                }

                for (i = 0;
                     output[i] == 'I' ||
                     output[i] == 'V' ||
                     output[i] == 'X' ||
                     output[i] == 'L' ||
                     output[i] == 'C' ||
                     output[i] == 'D' ||
                     output[i] == 'M' ||
                     output[i] == '\n';
                     i++)
                    cout << output[i];
                cout << "\n";
            }
        }
    }
}