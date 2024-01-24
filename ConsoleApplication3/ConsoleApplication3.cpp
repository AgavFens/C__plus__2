#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int breakolka = 0;
    int choice, a, b, c;
    double percent;
    int factorial = 1;
    while (breakolka == 0)
    {
        cout << "\n1. Сложение\n";
        cout << "2. Вычитание\n";
        cout << "3. Частное\n";
        cout << "4. Произведение\n";
        cout << "5. Возведение в степень\n";
        cout << "6. Нахождение квадратного корня\n";
        cout << "7. Нахождение 1 процента от числа\n";
        cout << "8. Найти факториал числа\n";
        cout << "9. Выйти из программы\n";

        cin >> choice;

        if (choice == 1)
        {
            cout << "1. Сложение\n";
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            c = a + b;
            cout << "Сумма чисел = " << c << endl;
        }
        else if (choice == 2)
        {
            cout << "2. Вычитание\n";
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            c = a - b;
            cout << "Разность чисел = " << c << endl;
        }
        else if (choice == 3)
        {
            cout << "3. Частное\n";
            cout << "Введите делимое: ";
            cin >> a;
            cout << "Введите делитель: ";
            cin >> b;

            if (b != 0)
            {
                c = a / b;
                cout << "Частное = " << c << endl;
            }
            else
            {
                cout << "Деление на ноль невозможно." << endl;
            }
        }
        else if (choice == 4)
        {
            cout << "4. Произведение\n";
            cout << "Введите первый множитель: ";
            cin >> a;
            cout << "Введите второй множитель: ";
            cin >> b;
            c = a * b;
            cout << "Произведение чисел = " << c << endl;
        }
        else if (choice == 5)
        {
            cout << "5. Возведение в степень\n";
            cout << "Введите основание: ";
            cin >> a;
            cout << "Введите степень: ";
            cin >> b;
            c = pow(a, b);
            cout << "Результат = " << c << endl;
        }
        else if (choice == 6)
        {
            cout << "6. Нахождение квадратного корня\n";
            cout << "Введите число: ";
            cin >> a;
            c = sqrt(a);
            cout << "Квадратный корень = " << c << endl;
        }
        else if (choice == 7)
        {
            cout << "7. Нахождение 1 процента от числа\n";
            cout << "Введите число: ";
            cin >> a;
            percent = a * 0.01;
            cout << "1 процент от числа = " << percent << endl;
        }
        else if (choice == 8)
        {
            cout << "8. Найти факториал числа\n";
            cout << "Введите число: ";
            cin >> a;
            for (int i = 1; i <= a; i++) {
                factorial *= i;
            }
            cout << "Ответ: " << factorial;
        }
        else if (choice == 9) 
        {
            breakolka = 1;
            cout << "Пока";
        }
        else
        {
            cout << "даун, я сказал выбери от 1 до 9\n";
        }
    }
}

