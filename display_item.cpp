//program for set item no and cost and display them


#include <iostream>

class item {
public:
    int no;
    float cost;
};

int main() using namespace std;
 {
   

    item myItem; // object for class item

    // Set data
    myItem.no = 101;
    myItem.cost = 25.99;

    // Print 
    cout << "Item Number: " << myItem.no << endl;
    cout << "Item Cost: $" << myItem.cost << endl;

   

    return 0;
}
