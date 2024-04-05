#include <iostream>

using namespace std;

int main()
{
    int price1, price2, price3, priceTotal;

    cout << "Калькулятор стоимости корзины\n";
    cout << "------------------\n";
    cout << "Введите цену 1-го товара: ";
    cin >> price1;
    cout << "Введите цену 2-го товара: ";
    cin >> price2;
    cout << "Введите цену 3-го товара: ";
    cin >> price3;
    cout << "------------------\n";
    priceTotal = price1 + price2 + price3;

    if (priceTotal > 10000) {
        int sale = priceTotal / 10;
        cout << "Вы купили товара больше чем на 10 тысяч и получаете скидку: " << sale << " рублей.\n";
        cout << "------------------\n";
        cout << "Общая стоимость: " << priceTotal - sale << " рублей.\n";
    }
    else {
        cout << "Общая стоимость: " << priceTotal << " рублей.\n";
    }

    return 0;
}