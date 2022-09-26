#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

class Flat
{
	double square;
	double price;
	int countRooms;
	int storey;
public:
	Flat(double sq, double pr, int cr, int st);
	Flat(const Flat& object);
	double get_square() const;
	double get_price() const;
	int get_countRooms() const;
	int get_storey() const;
	void set_square(double square);
	void set_price(double price);
	void set_countRooms(int countRooms);
	void set_storey(int storey);
	static bool isEqualSquare(const Flat& square1, const Flat& square2)
	{
		return square1.square == square2.square;
	}
	static bool isEqualPrice(const Flat& price1, const Flat& price2)
	{
		return price1.price == price2.price;
	}
	static bool isEqualCountRooms(const Flat& countRooms1, const Flat& countRooms2)
	{
		return countRooms1.countRooms == countRooms2.countRooms;
	}
	static bool isEqualStorey(const Flat& storey1, const Flat& storey2)
	{
		return storey1.storey == storey2.storey;
	}
	static bool isNotEqualSquare(const Flat& square1, const Flat& square2)
	{
		return !(square1.square == square2.square);
	}
	static bool isNotEqualPrice(const Flat& price1, const Flat& price2)
	{
		return !(price1.price == price2.price);
	}
	static bool isNotEqualCountRooms(const Flat& countRooms1, const Flat& countRooms2)
	{
		return !(countRooms1.countRooms == countRooms2.countRooms);
	}
	static bool isNotEqualStorey(const Flat& storey1, const Flat& storey2)
	{
		return !(storey1.storey == storey2.storey);
	}
	static bool LessSquare(const Flat& square1, const Flat& square2)
	{
		return square1.square < square2.square;
	}
	static bool LessPrice(const Flat& price1, const Flat& price2)
	{
		return price1.price < price2.price;
	}
	static bool LessCountRooms(const Flat& countRooms1, const Flat& countRooms2)
	{
		return countRooms1.countRooms < countRooms2.countRooms;
	}
	static bool LessStorey(const Flat& storey1, const Flat& storey2)
	{
		return storey1.storey < storey2.storey;
	}
	static bool MoreSquare(const Flat& square1, const Flat& square2)
	{
		return square1.square > square2.square;
	}
	static bool MorePrice(const Flat& price1, const Flat& price2)
	{
		return price1.price > price2.price;
	}
	static bool MoreCountRooms(const Flat& countRooms1, const Flat& countRooms2)
	{
		return countRooms1.countRooms > countRooms2.countRooms;
	}
	static bool MoreStorey(const Flat& storey1, const Flat& storey2)
	{
		return storey1.storey > storey2.storey;
	}
	void print() const;
};
Flat::Flat(double sq, double pr, int cr, int st)
{
	square = sq;
	price = pr;
	countRooms = cr;
	storey = st;
}
Flat::Flat(const Flat& object)
{
	square = object.square;
	price = object.price;
	countRooms = object.countRooms;
	storey = object.storey;
}
double Flat::get_square() const
{
	return square;
}
double Flat::get_price() const
{
	return price;
}
int Flat::get_countRooms() const
{
	return countRooms;
}
int Flat::get_storey() const
{
	return storey;
}
void Flat::set_square(double square)
{
	this->square = square;
}
void Flat::set_price(double price)
{
	this->price = price;
}
void Flat::set_countRooms(int countRooms)
{
	this->countRooms = countRooms;
}
void Flat::set_storey(int storey)
{
	this->storey = storey;
}
void Flat::print() const
{
	cout << square << " метров кв. площадь квартиры " << endl;
	cout << price << " млн. рублей стоимость квартиры. " << endl;
	cout << countRooms << " колличество комнат в квартире. " << endl;
	cout << storey << " этаж на котором находится квартира. " << endl;
}
int main()
{
	setlocale(LC_ALL, "Russian");

	Flat kv1(60, 4, 2, 3);
	Flat kv2(60, 5.5, 3, 1);
	kv1.print();
	cout << "\n";
	kv2.print();
	cout << "\n";
	bool temp;
	temp = kv1.isEqualCountRooms(kv1, kv2);
	cout << temp << endl;
	temp = kv1.isEqualSquare(kv1, kv2);
	cout << temp << endl;
	temp = kv1.isEqualPrice(kv1, kv2);
	cout << temp << endl;
	temp = kv1.isNotEqualPrice(kv1, kv2);
	cout << temp << endl;
}