#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    double mealCost, tip, tax, totalCost;
    int tipPercent, taxPercent;
    
    cin>>mealCost;
    cin>>tipPercent;
    cin>>taxPercent;
    
    tip = mealCost * tipPercent / 100;
    tax = mealCost * taxPercent / 100;
    
    totalCost = mealCost+tip+tax;
    //totalCost = 15.95;
    if (totalCost-int(totalCost) >= 0.5f ){
        totalCost+=0.5f;
    }
    
    cout<<"The total meal cost is "<<int(totalCost)<<" dollars."<<endl;
    
    return 0;
}