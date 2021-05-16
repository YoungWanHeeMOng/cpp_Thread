//
// 39 ��� ������ �ǽ�1 (��ǰ, ���� ��ǰ)
///

#include <iostream>
#include <string>

using namespace std;

class Product
{
    string name;
    int price;

public:
    Product(string name, int price) 
    {
        SetName(name);
        SetPrice(price);
    }
    virtual  int GetPrice()const
    {
        return price;
    }
    string GetName() const
    {
        return name;
    }
    virtual  void Print() const
    {
        cout << "��ǰ : " << GetName() << "  ���� : " << GetPrice() << endl;

    }
private:
    void SetPrice(int price)
    {
        this->price = price;
    }
    void SetName(string name)
    {
        this->name = name;
    }
};

class DiscountProduct :public Product
{
    int discount;
public:
    DiscountProduct(string name, int price, int discount)  :
        Product(name, price)
    {
        SetDiscount(discount);
    }
   
  virtual int GetPrice()const
    {
      int origin_price = Product::GetPrice();
      int dc = origin_price * discount / 100;
        return origin_price-dc;
    }
    int GetDiscount()     const
    {
        return GetPrice() * discount;
    }
    virtual void Print() const
    {
       
        cout << "��ǰ ���� : " << Product::GetPrice() << "  ������ : " << discount  << endl;
        Product::Print();
    }
private:
    void SetDiscount(int discount)
    {
        this->discount = discount;
    }

};


int main()
{
    Product* p1 = new Product("ġ��", 3000);
    Product* p2 = new DiscountProduct("ġ��", 3000,15);
    p1->Print();
    p2->Print();

    delete p1;
    delete p2;
    return 0;
}