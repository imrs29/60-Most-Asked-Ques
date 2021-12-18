//Brute force approach
/* [7 1 5 3 6 4]  
	i j // i will travserse j as linearly and if someone is graeter then 7
	|1 - 5| = 4 //profit of 4 buy on day 1 sell on day 5
	|1 - 6| = 5 // profit of 5
    tc = O(n^2)
    sc = o(1)
    keep on moving i and check next eleemmt
*/

/* Linearly traverse array and if you're at given index i u just keep track of the minimal element of left side.
    [7 1 5 3 6 4]    minEle = Int_max, 7 ,1  , profit = 0,4,5
    i  i

    minimal stays minium element and traverse other element if profit is graeter than prev element update .
    tc = o(n)
    sc = o(1)

*/  

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i < n; i++){
        cin >> arr[i];
    }
    int maxProfit = 0;
    int minPrice = INT_MAX;
    for(int i = 0; i < n; i++){
        minPrice = min(minPrice, arr[i]);
        maxProfit = max(maxProfit, arr[i] - minPrice);
    }
    cout << maxProfit;
}