#include <iostream>
#include <vector>

using namespace std;
void waysRec(int, int,vector <int> &, int&);                  //recursive function to count change, returns the amount of ways you can count change
int changeDenom(int);                  //this function will get a value and change it to the specific amount so you can make change
void printResults(vector<int>&, int);
void resetVector(vector<int>&);

int main() {
    int input;                          //user input
    int initialDenom = 25;              //will hold the initial value of denom which is 25 cents
    vector <int> change(4);                      //will hold the amount of quaters, nickles, etc..
    int count = 0;                          //holds the values of count
    cout << "Hello, Please enter a amount in cents we will calculate your change!" << endl;
    cin >> input;

    cout << "You Entered " << input << " cents" << endl;
    //will print out the most efficient way
    waysRec(input,initialDenom,change, count);
    cout << "THE MOST EFFICIENT METHOD:" << endl;
    printResults(change,count);
    cout << " " << endl;

    //second best way starting with dimes
    resetVector(change);
    initialDenom = 10;
    count = 0;
    waysRec(input,initialDenom,change, count);
    printResults(change,count);
    cout << " " << endl;

    //third starting with nickles
    resetVector(change);
    initialDenom = 5;
    count = 0;
    waysRec(input,initialDenom,change, count);
    printResults(change,count);
    cout << " " << endl;

    //worst way using just pennies
    resetVector(change);
    initialDenom = 1;
    count = 0;
    waysRec(input,initialDenom,change, count);
    printResults(change, count);


    return 0;
}
//resets the elements int the vector
void resetVector(vector<int> & money){
    for(int i = 0; i < money.size();i++)
    money[i] = 0;
}

//prints the simulations results
void printResults(vector<int> &money, int amount){
    cout << "This method uses " << amount << " coins." << endl;
    cout << "Quaters: " << money[0] << endl;
    cout << "Dimes: " << money[1] << endl;
    cout << "Nickles: " << money[2] << endl;
    cout << "Pennies: " << money[3] << endl;
}

//function that changes the value of denomination
int changeDenom(int amount){
    if(amount < 25) {
        if(amount < 10){
            if(amount < 5) {
                if (amount == 0) {
                    return 2;
                }
                return 1;
            }
            return 5;
        }
        return 10;                    //if amount is less than 25 we will change the denomination to 10
    }
}

//recursive function that counts the amount of change
void waysRec(int amount, int denom,vector <int> &money, int &count){
    if(amount == 0) {
        return;                         //base condition if amount == 0 the function breaks
    }
    if(denom == 2) {
        return;                         //if there are no more denominations the fucttion ends
    }

    count++;                            //will increment count
    if(amount < denom) {
        denom = changeDenom(amount);             //function will change the value of denom to the appropriate value
    }

        if (denom == 25) {
            money[0] = money[0] + 1;                  //will add one to the quaters slot in the array
        }
        else if (denom == 10) {
            money[1] = money[1] + 1;                  //will add 1 to the dimes slot
        }
        else if (denom == 5) {
            money[2] = money[2] + 1;                  //will add 1 to the nickles slot
        }
        else if (denom == 1) {
            money[3] = money[3] + 1;                  //will add 1 to the pennies slot
        }

    waysRec(amount - denom, denom,money,count);
}