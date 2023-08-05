//program to bill items 




#include <iostream>

using namespace std;

class item {
public:
    int no;
    float cost;

    // Member function to set data for the item
    void getdata() {
        cout << "Enter Item Number: ";
        cin >> no;

        cout << "Enter Item Cost: $";
        cin >> cost;
    }

    // Member function to display the item data
    void displaydata() {
        cout << "Item Number: " << no << endl;
        cout << "Item Cost: $" << cost << endl;
    }
};

int main()  {
  

    item myItem1,myItem2; // object for class item

    // Set data 
    myItem1.getdata();

    // Print
    myItem1.displaydata();

     // Set data 
    myItem2.getdata();

    // Print
    myItem2.displaydata();


    float total= myItem1.cost + myItem2.cost ;
    cout << "total cost of your items is $" << total ;

    

    return 0;
}
