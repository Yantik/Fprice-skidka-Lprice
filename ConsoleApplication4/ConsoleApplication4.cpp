
#include <iostream>
using namespace std;
#define started setlocale(LC_ALL,"ru") 
class Nowprice
{
	int price, discount;
	void print()
	{
		cout << price << endl << discount << "%\n";
	}
public:
	int SetPrice_Discount(int price, int discount)
	{
		this->price = price;
		this->discount = discount;
		print();
		return price - price / discount;
	}
};
int main()
{
	started;
	uint price,Dis;
	cout << "Введите цену товара: ";
	cin >> price;
	cout << "Введите скидку товара: ";
	cin >> Dis;
	Nowprice* product = new Nowprice;
	cout << product->SetPrice_Discount(price, Dis);
	delete product;
}

