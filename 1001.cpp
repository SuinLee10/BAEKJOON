 #include <iostream>
using namespace std;
int main(){
    int A, B;
    cin >> A >> B;
    if(A > 0 || B < 10){
        cout << A - B ;
    }else cout << "ERROR" << endl;
    
    return 0; 
}