//buying and selling stocks for maximum profit
#include<iostream>
#include<climits>
using namespace std;


void maxProfit(int *prices,int n){

    int bestBuy[100000];//bestbuy[n]is not possible in c++
    bestBuy[0]=INT_MAX;
    //BEST BUY ARRAY
    for(int i=1;i<n;i++){
        bestBuy[i]=min(bestBuy[i-1],prices[i-1]);
        cout<<bestBuy[i]<<",";
    }

    //PROFIT ARRAY
    int profit=0;
    for(int i=0;i<n;i++){
        int currprofit=prices[i]-bestBuy[i];
        profit=max(profit,currprofit);

    }
    cout<<"max profit:"<<profit<<endl;

}


int main(){
    int prices[6]={7,6,5,4,3,2};
    int n=sizeof(prices)/sizeof(int);
    maxProfit(prices,n);

    return 0;
}
