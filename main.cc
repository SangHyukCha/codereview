#include <iostream>
#include "./shopping.h"

int main(int argc, char* argv[]) {
  Goods goods1;
  Goods goods2;
  Goods goods3;
  Shopping shoppingList;

  goods1.SetGoodsPrice(2, 3000);
  goods2.SetGoodsPrice(1, 5000);
  goods3.SetGoodsPrice(3, 1000);

  shoppingList.PushList(goods1);
  shoppingList.PushList(goods2);
  shoppingList.PushList(goods3);

  shoppingList.PrintList();

  shoppingList.SortByPrice();

  shoppingList.PrintList();

  shoppingList.SortByIndex();

  shoppingList.PrintList();

  return 0;
}
