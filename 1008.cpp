#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int A, B;
    cin >> A >> B;
    if(A > 0 || B < 10){
       cout << setprecision(15) << (double)A / (double)B << endl;
    }else cout << "ERROR" << endl;
    
    return 0; 
}