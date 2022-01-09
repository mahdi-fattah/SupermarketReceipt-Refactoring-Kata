#ifndef CPP_RECEIPT_H
#define CPP_RECEIPT_H


#include <vector>
#include <numeric>
#include "Discount.h"
#include "ReceiptItem.h"

class Receipt {
public:
    std::vector<ReceiptItem> getItems() const;

    std::vector<Discount> getDiscounts() const;

    double getTotalPrice() const;

    void addDiscount(const Product& product, std::string description, double discountAmount);

    void addProduct(const Product& product, double quantity, double price, double totalPrice);

    double getItemQuantity(std::string itemName);

private:
    std::vector<ReceiptItem> items;
    std::vector<Discount> discounts;
};


#endif //CPP_RECEIPT_H
