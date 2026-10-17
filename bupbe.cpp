#include<queue>
#include<iostream>

using namespace std;
int main(){
queue<int>q;
int x;
int n;
cout<<"so luong bup be can nhap: ";
cin>>n;

for(int i=0;i<n;i++){
    cout<<"nhap chieu cao bup be thu "<<i+1<<": ";
    cin>>x;
    if(!q.empty()&& q.front()-3>=x){
        q.pop();
    }
    q.push(x);
}
cout<<"so luong bup be it nhat la: "<<q.size();
}