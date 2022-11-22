#include <iostream>
using namespace std;
double c(double);
float c(float);
int c(int);

int main(){
    double fh1;
    float fh2;
    int fh3;

    cout<< "masukkan suhu fahrenheit a : "<<endl;
    cin >> fh1;
    cout <<"hasil a ke celciusnya adalah :"<<c(fh1)<<endl;
    cout<< "masukkan suhu fahrenheit b : "<<endl;
    cin >> fh2;
    cout <<"hasil b ke celciusnya adalah :"<<c(fh2)<<endl;
    cout<< "masukkan suhu fahrenheit c : "<<endl;
    cin >> fh3;
    cout <<"hasil c ke celciusnya adalah :"<<c(fh3)<<endl;
    return 0;


}
double c(double fh1){
    return ((fh1-32.0)*5/9);
}
float c(float fh2){
    return ((fh2-32.0)*5/9);
}
int c(int fh3){
    return ((fh3-32.0)*5/9);
}
