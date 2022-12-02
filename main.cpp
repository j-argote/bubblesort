#include <iostream>
using namespace std;

const int SIZE = 10;

int main(){
  int nums_list[SIZE];
  int temp;

  //read in 10 integers and store in an array
  for(int i = 0; i < SIZE; i++){
    cin >> nums_list[i];
  }
  //loop through the array and sort the numbers in ascending order using bubblesort
  for(int i = 0; i < SIZE; i++){
    for(int j = 0; j < SIZE - 1; j++){
      if(nums_list[j] > nums_list[j + 1]){
        temp = nums_list[j];
        nums_list[j] = nums_list[j + 1];
        nums_list[j + 1] = temp;
      }
    }
  }
  //print the sorted array
  cout << "Sorted array:" << endl;
  for(int i = 0; i < SIZE; i++){
    cout << nums_list[i] << " ";
  }
  
  return 0;
}