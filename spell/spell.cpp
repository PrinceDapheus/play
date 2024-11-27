#include <iostream>
using namespace std;
#include <memory>

class car{

private:
string model;

public:
//Contructor
car (string const &m)
:model(m)
{
cout << "Car created : " << model <<endl;
}

//Destructor
~car (){

cout << "Car Destroyed!" <<endl;

}


//Drive function
void drive(){

cout << "Driving!" <<endl;

}

};

int main (){


//create pointer
 unique_ptr<car>car1 = make_unique<car>("Suzuki");

//Move pointer
unique_ptr<car>car2 = std::move(car1);

if (car1 == nullptr){
    cout << "car one is NOT in CONTROL..." <<endl;
}

//use drive funtion
car2->drive();


 





    return 0;
}


