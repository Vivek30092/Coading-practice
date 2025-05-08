#include<iostream>
using namespace std ;
class car{
    public:
        int  color ;
        string mileage;  
        string model ;
};

int main(){
    car my_obj ;
    my_obj.color = 45;
    my_obj.mileage = "45 KM";
    my_obj.model = "G Wagon";
    cout<<my_obj.color<<  "," <<my_obj.mileage << "," <<cout <<my_obj.model<<"\n";
    return 0;
}