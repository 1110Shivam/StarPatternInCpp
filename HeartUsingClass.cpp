#include<iostream>
using namespace std;

class StarPattern{
    int n,i,j;
    public:

    int disp(){
        cout<<"Enter the number of rows = ";
        cin>>n;
        for(i=n/2;i<=n;i+=2){
            for(j=1;j<n-i;j+=2){
                cout<<" ";
            }
            for(j=1;j<=i;j++){
                cout<<"*";
            }
            for(j=1;j<=n-i;j++){
                cout<<" ";
            }
            for(j=1;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        for(i=n;i>=1;i--){
            for(j=i;j<n;j++){
                cout<<" ";
            }
            for(j=1;j<=(i*2)-1;j++){
                cout<<"*";
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