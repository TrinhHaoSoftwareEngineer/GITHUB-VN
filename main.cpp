#include <iostream>
using namespace std;
int main(){
    cout << "Hello world" << endl;
    int n; cin >> n;
    cout << n << endl; 
    int f = 0; 
    for(int i= 0; i < n; i++){
        f+= i*n;
    }
    cout << f << endl;
    cout << "Trinh Nguyen Kien Hao"<<endl;
      
    cout << "Conflict from master" <<endl;
    cout << " Conflict here"<<endl;
}