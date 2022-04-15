#include<iostream>
using namespace std;


bool check(int* a,int b ){
    int d=1;

  for(int i=1;i<b;i++){
      if(a[i]<a[i-1]){
       d=0;
          break;
      }
      else{
          check(a,b-1);
      }
     
  }
    

     return d==1;

}

int sum(int* a,int size){
    
    if(size==1){
        return a[0];
    }
    else{
        return a[size-1]+sum(a,size-1);
        
    }

}

bool present(int* a,int size, int n){
    if(a[0]==n){
        return true;
    }
    if(size==1&&a[0]!=n){
        return false;
    }

    bool pres = present(a+1,size-1,n);
    return pres;
}

int index(int* a,int size,int n){
    int d=0;
    int count=0;
    if(a[0]!=n&&size==1){
        d=1;
    }
    else if(a[0]==n){
        return 0;
    }
    else{
        count=1+index(a+1,size-1,n);

    }

    if(d==1){
        return -1;
    }
    else{
        return count;
    }

    
   
    
}

int lastindex(int* a,int size,int n){

    
}


int main(){

    int a[5];

    for(int i=0;i<5;i++){
        cin>>a[i];
    }
   int  size=5,n;
   cout<<"enter element to chck present or not "<<endl;
   cin>>n;

    cout<<index(a,size,n);
}