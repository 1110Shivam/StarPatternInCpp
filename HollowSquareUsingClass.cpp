#include<iostream>
using namespace std;

class StarPattern{
    int n,i,j;
    public:

int disp(){
    cout<<"Enter the number of rows = ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1||i==n||j==1||j==n)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
};
int main(){
    StarPattern obj;
    obj.disp();
    return 0;
}