// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int target = 9;
//     vector <int> vec = {1,2,3,4,5};
//     for(int i=0 ; i< vec.size(); i++){
//         for(int j=i+1 ; j < vec.size() ; j++){
//             // cout <<vec[i]<<vec[j];
//             // cout<<",";
//             if (vec[i]  + vec[j] == target){
//                 cout << "Pair found: "<<vec[i]<<" "<<vec[j]<<endl;
//             }

//         }
//         cout<<endl;
//     }
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector <int> vec = {1,2,3,4,5};
//     int  target = 5;
//             int st=0 , end= vec.size()-1;

//     for(int i=0 ; i<vec.size() ; i++){

//         if (vec[st] + vec[end] == target){
//             cout << "Pair found: "<<vec[st]<<" "<<vec[end]<<endl;
//         }
//         else if (vec[st] + vec[end] < target){
//             st++;
//         }
//         else{
//             end--;
//         }
//     }

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {1,2,4,4,4};
//     for(int i=0 ; i< 5 ; i++){
//         if (arr[i] == )
//     }
// }


// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n = 2 ;
//     int x = 3 ; 
//     int result = 1;
//     for(int i=0 ; i<n ; i++){
//         result =  result * x ;

//     }
//     cout<<result;
// }


/*You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.*/
// #include<iostream>
// #include<vector>
// #include<math.h>
// using namespace std;
// int main(){
//     vector <int> prices = {7,1,2,4,6};
//     int maxProfit = 0 ;
//     int bestBuy =  prices[0] ;

//     for(int i=0 ; i<prices.size() ; i++){
//         if (prices [i] > bestBuy){
//             maxProfit = max(maxProfit , prices[i] - bestBuy);
//         }
//         bestBuy = min(bestBuy , prices[i]);
//     }
//     cout<<maxProfit;
// }


// #include<iostream>
// #include<vector>
// #include<math.h>
// using namespace std;
// int main(){
//     int maxWater=1;
//     vector <int> vec = {1,8,6,2,5,4,8,3,7};
//     int st = 0 ;
//     int end = vec.size()-1;
//     int maximum = INT_MIN;

//     while(st<end){
//         int minimum = min (vec[st],vec[end]);
//         maxWater = minimum *  (end-st);
//         st++;
//         return maxWater;
//     }
//     maxWater =  max(maxWater , maximum);
//     cout<< maxWater;
   
// }



// 


// #include<iostream>
// #include<vector>
// #include<math.h>
// using namespace std;
// int main(){
//     vector <int> vec= {1,2,3,4,5,6,8,9,10,3,2,1};
//     for(int i =0 ; i< vec.size() -1 ; i++){
//         if (vec[i-1] <vec[i] && vec[i]> vec[i+1]){
//             cout<<vec[i]<<" ";
//         }
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6] = {1,2,3,4,5,6};
//     int sz= sizeof(arr) / sizeof(int);
//     int st= 0 , end = sz-1 , tar=4;
//     while(st<end){
//         int mid = st+(end-st)/2;
//         if(arr[mid]==tar){
//             cout<<arr[mid];
//         }else if(arr[mid]<tar){
//             st= mid+1;
//         }else{
//             end = mid-1;
//         }
//     }
// }


