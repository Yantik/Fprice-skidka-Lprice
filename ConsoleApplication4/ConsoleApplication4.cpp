
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
void Again()
{

}
int main()
{
link:
	started;
	int price,Dis;
	cout << "Введите цену товара: ";
	cin >> price;

	if (price <= 0)
	{
		cout << "Товар имеет цену меньше или равно нулю"; 
		goto link;
	}
	cout << "Введите скидку товара: ";
	cin >> Dis;
	Nowprice* product = new Nowprice;
	cout << product->SetPrice_Discount(price, Dis);
	delete product;
}

