// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

    
//     Node(int val){
//         data = val;
//         next = NULL;
//     }
// };

// class List{
//     Node* head;
//     Node* tail;

//     public:
//     List(){
//         head = NULL;
//         tail = NULL;
//     }
//     void push_front(int val){
//         Node* newNode = new Node(val);
//         if(head==NULL){
//             head=tail=newNode;
//         }else{
//             newNode->next = head;
//             head = newNode;
//         }
//     }
//     void push_back(int val){
//         Node* newNode = new Node(val);
//         if(head==NULL){
//             head=tail=newNode;
//         }else{
//             tail->next = newNode;
//             tail=newNode;
//         }
//     }
//     void printList(){
//         Node* temp = head;
//         while(temp!=0){
//             cout<<temp->data <<"-> ";
//             temp = temp->next;
//         }
//     }
// };
// int main(){
//     List ll;
//     ll.push_front(3);
//     ll.push_front(2);
//     ll.push_front(1);
//     ll.printList();
//     ll.push_back(4);
//     ll.push_back(5);
//      ll.printList();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// // Function to delete an element from an array
// void deleteElement(int arr[], int& size, int position) {
//     // Check if the position is valid
//     // if (position < 0 || position >= size) {
//     //     cout << "Invalid position" << endl;
//     //     return;
//     // }
    
//     // Shift elements to the left to overwrite the element at the given position
//     for (int i = position; i < size - 1; i++) {
//         arr[i] = arr[i + 1];
//     }
    
//     // Decrease the size of the array
//     size--;
// }

// // Function to print the array
// void printArray(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int size = 5;
    
//     cout << "Original array: ";
//     printArray(arr, size);
    
//     int positionToDelete = 2; // Delete element at index 2 (i.e., 30)
//     deleteElement(arr, size, positionToDelete);
    
//     cout << "Array after deletion: ";
//     printArray(arr, size); // Output: 10 20 40 50
    
//     return 0;
// }

#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main(){
    string str = "jayj";
    int st=0 , end = str.length()-1;
    while(st<=end){
        if(str[st]!=str[end]){
            cout<<"Not palindrome";
            break;
        }
        st++;
        end--;
    }
    cout<<"palin";
    return 0;
}