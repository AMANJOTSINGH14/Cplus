#include <iostream>

using namespace std;

int main()
{

    int even{0};
    
    int current{0};
    
    int next{1};
    int sum{0};
    
    while(sum<=4000000){
        sum=current + next;
    current=next;
    next=sum;
  
    if(sum%2==0){
      even =even+ sum;
   
    }
}
cout<<even<<endl;
    return 0;
}
