#include <iostream>
using namespace std;

void bubblesorting(int arr[], int size){
    
    for (int i = 0; i < size; i++)
    {
       
      for (int j = 0; j< size-i ;j++)
      {
          if (arr[j]>arr[j+1])
          {
             swap(arr[j+1],arr[j]);
          }
          
      }
      
        

    }
    
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    
    int box[4]={4,65,5,7};
    bubblesorting(box,4);





    return 0;
}

