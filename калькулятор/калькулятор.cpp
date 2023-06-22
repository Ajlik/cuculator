#include <iostream>
int main()
{
    using namespace std;
    setlocale(LC_ALL, "RU");

    float num1, num2, res; //создаюм переменный с числами и операцией
    char ope;
    int dev = 0;

   cout << "введите первое число \n"; //вводим певое число и помещаем его в переменную
   cin >> num1;

    cout << "введите второе число \n"; //вводим второе число и помещаем его в переменную
    cin >> num2;

    //защита от деления на ноль
    {
        if (num1 == 0)
            cout << "дебил на ноль дельть нельзя \n " << dev++;
        else  if (num2 == 0)
            std::cout << "дебил на ноль дельть нельзя \n " << dev++;


        while (dev < 1) {
            cout << "введите операцию (+,-,*,/) \n"; //вводим спец знак  и помещаем его в переменную
            cin >> ope;
            break;
        }}
    //математические действия
    {
        if (ope == '+')
            res = num1 + num2;

        else if (ope == '-')
            res = num1 - num2;

        else if (ope == '*')
            res = num1 * num2;

        else if (ope == '/')
            res = num1 / num2;
        std::cout << res << endl;
    }
    return 0;
}