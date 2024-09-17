#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    double temperature, sum = 0;
    
cout<< "How many temperatures would you like to input?";
cin>>n;

if(n<=0){
    cout<<"Enter a valid number of temperatures."<<endl;
    return 1;
}

vector<double> temperatures(n);
cout<<"Enter the temperatures:"<<endl;
for(int i=0;i<n;++i){
    cout<<"Temperature"<<i+ 1 <<":";
    cin>>temperature;
    temperatures[i]= temperature;
    sum+= temperature;

}
double average= sum/n;
cout<<"The average temperature is:"<<average<<endl;
return 0;


}