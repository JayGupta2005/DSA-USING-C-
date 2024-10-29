// #include<iostream>
// using namespace std;
// class Node{
//     int data;
//     Node* next;

//     public:
//     node(int value){
//         data = value;
//         next = NULL:
//     }
// };

// class List {
//     Node* head;
//     Node* tail;

//     public:
//     List(){
//         head = NULL;
//         tail =  NULL;

//     }
// };
// int main(){
//     List ll();
// }


// 


// #include<iostream>
// using namespace std;

// void add(int arr[] , int target , int size){
//     for (int i=0 ; i< size ; i++){
//        if (arr[i] == target){
//         cout << i ; 
//        }
//        elseif(  target > arr[i]){

//        }

//     }
// }
// int main(){
//     int arr[] = { 1,4,5,8,9};
//     int size =  sizeof(arr)/sizeof(int);
//     add(arr , 8 , size);


// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector <int > vec = {1,2,3,4};
   
//     for(int i=0 ; i<  vec.size() ; i++){
//          int pro = 1;
//         for(int j =0 ; j<  vec.size() ; j++){
//             if (i!= j ){
//                 pro = pro * vec[j];
//             }
          

//         }
//   cout  << pro << " ";
//     }


// }


// #include<iostream>
// #include<vector>  
// using namespace std;
// int main(){
//     int tar = 4;
//     vector <int> vec = {1,2,3,4,5};
//     int st = 0 ;
//     int end = vec.size() - 1;
//     while(st <  end ){
//         if(vec[st] == tar){
//             cout << vec[st];
//         }
//         else if(vec[end] == tar){
//             cout << vec[end];
//         }
//         else if (vec[st] < tar){
//             st++;
//         }
//         else {
//             end--;
//         }
//     }
// }

// 

// #include<iostream>
// #include<vector>
// using namespace std;

// int binSearch (vector <int> v , int tar){
//     int st = 0 , end = v.size()-1;

//     while(st <= end){
//         int mid = (st + end)/2;
//         if (v[mid] < tar){
//             st = mid+1;
//         }
//         else if (v[mid]> tar){
//             end = mid-1;
//         }else{
//             return mid;
//         }
//     }
//     return -1;
// }
// int main(){
//     vector <int> vec1 = {1,2,3,4,5,6,7,8};
//     int tar1= 6;
//     cout<< binSearch(vec1 ,  tar1)<<endl;

//     vector <int> vec2 = {1,3,6,8,10};
//     int tar2 = 3;
//       cout<< binSearch(vec2 ,  tar2)<<endl;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// int binSea(vector <int> arr , int tar){
//     int st = 0 ;
//     int end = arr.size() - 1;

//     while(st <= end){
//         int mid = st +(end-st) / 2;

//         if (arr[mid] == tar){
//             return mid;
//         }else if(arr[mid] < tar){
//             st = mid+1;
//         }else{
//             end = mid-1;
//         }
//     }
//     return -1;
// } 
// int main(){
//     vector <int> vec1 = {1,2,3,4,5,6,7};
//     cout<<binSea(vec1 , 4)<<endl;
//     vector <int> vec2 = {2,3,4,5,6,7};
//     cout<<binSea(vec2 , 2);
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector <int> vec1 = { 3,4,5,6,0,1,2};
//     int tar1 = 0;
//     for (int i=0 ; i< vec1.size() ; i++){
//         if (vec1[i] == tar1){
//             cout<<i<<endl;
//         }
//     }
// }



// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector <int> vec = {4,5,6,7,1,2,3};
//     int tar = 7;
//     int st = 0 , end = vec.size() - 1;
//     while(st<= end){
//         int mid = st + (end - st) / 2;
//         if(vec[mid] == tar){
//             cout<<mid;
//         }
//         if(vec[mid] )
//     }
// }

// array 

#include<iostream>
using namespace std;
int main(){
    string  str = "jay";
    cout<<str[0];
    cout<<str[1];
    cout<<str[2];

    // char arr [] = {'a' , 'c' , 'd'};
    // int n = sizeof(arr) / sizeof(char);
    // for (int i=0 ; i<n ; i++){
    //     cout<<arr[i]<< " ";
    // }
}