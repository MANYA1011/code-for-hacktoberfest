#include<iostream>  
using namespace std;
int main ()
{
   int i, j,temp;
   int arr[5] = {10,2,0,43,12};
   cout <<"Input list\n";
   for(i = 0; i<5; i++) {
   cout <<arr[i]<<"\t";
}
cout<<endl;
for(i = 0; i<5; i++) {
   for(j = i+1; j<5; j++)
   {
      if(arr[j] < arr[i]) {
         temp = arr[i];
         arr[i] = arr[j];
         arr[j] = temp;
      }
   }
}
cout <<"Sorted Element List\n";
for(i = 0; i<5; i++) {
   cout <<arr[i]<<"\t";
   }
return 0;
}
