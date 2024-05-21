#include<iostream>
using namespace std;
 main (){
    int r;
    cout<<"This is a temprature convertor application\n press 1 for c to f \n press 2 for f to c\n";
    // cout<<"______________________________________________________________________________________";
    cin>>r;
    float c,f;

if(r==1){
    cout<<"Enter temprature in celsius\n";
    cin>>c;
    f= 9/5.0*c+32;
    cout<<"You r converted temprature is"<<f;

}
else if(r==2){

    cout<<"Enter temprature in celsius\n";
    cin>>f;
    c= 5/9.0*f-32;
    cout<<"You r converted temprature is"<<c;
}
else{
    cout<<"you have entered wrong key";
}
 }
