/*
Write a C ++ function to return minimum and maximum in an array. 
Your program should make the minimum number of comparisons. 
*/

#include <bits/stdc++.h>
using namespace std;




class maxi
{
    private:
    int a[10],min, max,i;
    public:
    void input()
    {
        cout<<"enter 5 "<<endl;
        for(i=0;i<5;i++){
            cin>>a[i];
        }
    }

    void maximum()
    {
        for(i=0;i<5;i++){
            if(a[i]>max)
            {
                max=a[i];
            }
            else{
                continue;
            }
        }
    }

void minimum(){
    min=a[0];
    for(i=0;i<5;i++){
            if(a[i]<min){
                min=a[i];
            }
            else{
                continue;
            }
        }
}

void print(){
    for(i=0;i<5;i++){
           cout<<i<<": "<<a[i]<<endl;
        }
        cout<<"max: "<<max<<"    min:"<<min<<endl;
}

};

int main()
{
  maxi m;
  m.input();
  m.maximum();
  m.minimum();
  m.print();
  //m.getMinandMax(arr,n);
}
