#include "goods.h"

// Set member variable of goods with given index and price values
void Goods::SetGoodsPrice(int index, int price) {
  index_ = index;
  price_ = price;
}

// Return index information
int Goods::GetIndex() {
  return index_;
}

// Return price informaiton
int Goods::GetPrice() {
  return price_;
}
