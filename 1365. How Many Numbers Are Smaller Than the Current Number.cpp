//https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/ 

#include <iostream>

using namespace std;

int main()
{
   int a[]={8,1,2,2,3};
   int num;
   for(int i=0;i<5;i++){
       num=a[i];
       int c=0;
       for(int j=0;j<5;j++){
           if(num>a[j]){
               c++;
           }
       }
       cout<<c<<" ";
   }

    return 0;
}
