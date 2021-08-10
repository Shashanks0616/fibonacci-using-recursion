#include <iostream>
using namespace std;
int getFib(int n){
    if(n==0||n==1){
        return n;
    }

    return getFib(n-1)+getFib(n-2);
}

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    cout<<"The fibonacci of the number "<<n<<" is "<<getFib(n)<<endl;
    


return 0;
}