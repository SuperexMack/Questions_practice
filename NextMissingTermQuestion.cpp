#include<bits/stdc++.h>
using namespace std;


   int missingNumber(vector<int>& array, int n) {
        
        sort(array.begin(), array.end());
        
        int c;
        
        for(int i = 0 ; i<array.size() ; i++){
            
            
          if(array[i+1]-array[i] > 1){
              
              c = array[i] +1 ;
              break;
          }  
        }
        
        
         return c;
    }


int main(){

vector<int> mohit = {34,35,21};

int d = missingNumber(mohit, 3);

cout<<d;


}


