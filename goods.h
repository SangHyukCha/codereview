#ifndef GOODS_H_
#define GOODS_H_

// Goods class for representing goods information with index and price
// Example:
//    Goods test;
//    test.SetGoodsInfo(1, 10000);
//    std::cout << test.GetIndex() << " - " << test.GetPrice << endl;
class Goods{
 public:
  void SetGoodsPrice(int index, int price);
  int GetIndex();
  int GetPrice();

 private:
  int index_ = 0;
  int price_ = 0;
};


#endif  // GOODS_H_
