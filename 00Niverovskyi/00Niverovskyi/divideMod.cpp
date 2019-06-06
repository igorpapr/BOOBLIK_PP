// task3
#include <iostream>

using namespace std;

//Функція для знаходження цілої частини
int dModI(int i, int j)
{
    int a = 0;
    if (j == 0)
        return 0;
    while (i >= j) // Віднімаємо із лівої частини праву а-разів, доки ліва частина не буде менша за праву
    {
        i -= j;
        a++;
    }
    return a; // повертаємо а
}

//Функція для знаходження залишка
int dModR(int i, int j)
{
    if (j == 0)
        return 0;
    while (i >= j) // Віднімаємо із лівої частини праву, доки ліва частина не буде менша за праву
        i -= j;
    return i; // Повертаємо і, яка і буде залишком
}
//Функція для тестування

void testerDMod(int i, int j)
{
    cout <<"Problem 3 : "<<  i << " DIVIDE " << j << "; Integer = " << dModI(i, j) << "; Remainder = " << dModR(i, j) << endl;

}