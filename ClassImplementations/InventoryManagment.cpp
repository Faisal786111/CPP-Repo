#include <bits/stdc++.h>
#include <iostream>
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
	1. products (list of products) -> unordered_map<pId, product> products;
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
 
class Category { 
    int categoryId; 
    string categoryName; 
    
    public: 
    Category() {
        categoryId = 0; 
        categoryName = ""; 
    }
    
    Category(int cId, string cName) { 
        categoryId = cId;
        categoryName = cName; 
    }
    
    void setCategoryId(int cId) {
        categoryId = cId; 
    }
    void setCategoryName(string cName) {
        categoryName = cName;
    }
    
    int getCategoryId() { return categoryId; }
    string getCategoryName() { return categoryName; }
};

class Product: public Category { 
    int productId; 
    string productName; 
    int quantity; 
    
    public: 
    Product() { 
        productId = 0;
        productName = "";
        quantity = 0; 
    }
    
    Product(int cId, string cName, int pId, string pName): Category(cId, cName) {
        productId = pId;
        productName = pName; 
        quantity = 0;
    }
    
    void setProductId(int pId) { productId = pId; }
    void setProductName(string pName) { productName = pName; }
    void setQty(int qty) { quantity = qty; }

    int getProductId() {return productId;}
    string getProductName() { return productName; }
    int getQty() { return quantity; }

    void print() { 
        cout << productId << " " << productName << " " << quantity << endl;
    }
};

class Inventory: public Product {
    // Fast lookup: by Id 
    unordered_map<int, string> categories; // <cId, cName>;
    unordered_map<int, Product> products; // <pId, Product>;

    public: 
    void addCategory(int cId, string cName) { 
        categories[cId] = cName; 
    }

    void addProdut(int cId, int pId, string pName) { 
        string cName = (categories.count(cId) ? categories[cId]: "");

        Product p(cId, cName, pId, pName);
        products[pId] = p; 
    }

    void updateQty(int pId, int qty) { 
        // Key exists inside the map? count will return 1 or 0
        if(products.count(pId)) { 
            products[pId].setQty(qty); 
        }
    }

    void getProduct(int pId) { 
        if(products.count(pId)) { 
            products[pId].print(); 
        } else { 
            cout << "Product Not found" << endl;
        }
    }
};

int main()
{
    Inventory i; 

    string CMD; 

    while(cin >> CMD) { 
        if(CMD == "ADD_CATEGORY") { 
            int cId; 
            string cName; 

            cin >> cId >> cName; 

            i.addCategory(cId, cName); 
        }
        else if(CMD == "ADD") { 
            int cId, pId;
            string pName; 

            cin >> cId >> pId >> pName;

            i.addProdut(cId, pId, pName);
        }
        else if(CMD == "UPDATE") { 
            int pId, qty; 

            cin >> pId >> qty;

            i.updateQty(pId, qty); 
        }
        else if(CMD == "GET") { 
            int pId; 

            cin >> pId; 
            i.getProduct(pId); 
        }
    }
    return 0;
}