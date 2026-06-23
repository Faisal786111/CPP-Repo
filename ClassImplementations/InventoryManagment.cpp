#include <iostream>
#include <vector>
#include <string>
using namespace std;

/**
 * 3. Inventory Management System
You are tasked with developing an inventory management system for a retail store that sells various products organized into different categories. Implement classes to handle product’s information, categories, and inventory management using a multilevel inheritance structure.
Function Description – 
1. Categories class– This class represents a category and has the following attributes
	1. categoryId (int) – unique identifiers for the category
	2. categoryName (string) – Name of the category
2. Product class – This class represents a product and inherits from the category class
	1. productId (int)
	2. productName (string)
	3. quantity (int)
3. Inventory class – This class manages the inventory
	1. products (list of products) -> vector
	2. addProduct (Product product)
	3. updateQuantity (int productId, int quantity)
	4. getProduct (int productId)

Example input – 
ADD_CATEGORY 1 Electronics
ADD 1 1 Laptop
ADD 1 2 Mouse
UPDATE 1 10
GET 1 
GET 2
UPDATE 2 5
GET 2

Output – 
1 Laptop 10
2 Mouse 0
2 Mouse 5

 */

// Base Class
class Category {
protected:
    int categoryId;
    string categoryName;

public:
    Category() {
        categoryId = 0;
        categoryName = "";
    }

    Category(int id, string name) {
        categoryId = id;
        categoryName = name;
    }
};

// Derived Class
class Product : public Category {
protected:
    int productId;
    string productName;
    int quantity;

public:
    Product() {
        productId = 0;
        productName = "";
        quantity = 0;
    }

    Product(int cid, string cname,
            int pid, string pname)
        : Category(cid, cname) {

        productId = pid;
        productName = pname;
        quantity = 0;
    }

    int getProductId() {
        return productId;
    }

    string getProductName() {
        return productName;
    }

    int getQuantity() {
        return quantity;
    }

    void setQuantity(int qty) {
        quantity = qty;
    }
};

// Multilevel Inheritance
class Inventory : public Product {
private:
    vector<Product> products;

public:
    void addProduct(Product product) {
        products.push_back(product);
    }

    void updateQuantity(int productId, int quantity) {
        for (auto &p : products) {
            if (p.getProductId() == productId) {
                p.setQuantity(quantity);
                return;
            }
        }
    }

    Product* getProduct(int productId) {
        for (auto &p : products) {
            if (p.getProductId() == productId) {
                return &p;
            }
        }
        return nullptr;
    }
};

int main() {

    Inventory inventory;

    Product p1(1, "Electronics", 1, "Laptop");
    Product p2(1, "Electronics", 2, "Mouse");

    inventory.addProduct(p1);
    inventory.addProduct(p2);

    inventory.updateQuantity(1, 10);

    Product* p = inventory.getProduct(1);
    if (p) {
        cout << p->getProductId() << " "
             << p->getProductName() << " "
             << p->getQuantity() << endl;
    }

    p = inventory.getProduct(2);
    if (p) {
        cout << p->getProductId() << " "
             << p->getProductName() << " "
             << p->getQuantity() << endl;
    }

    inventory.updateQuantity(2, 5);

    p = inventory.getProduct(2);
    if (p) {
        cout << p->getProductId() << " "
             << p->getProductName() << " "
             << p->getQuantity() << endl;
    }

    return 0;
}