#include "car.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    std::vector<Car>carList;
    carList.emplace_back("BMW","X5",2022);
    carList.emplace_back("Toyota","Corolla",2020);
    carList.emplace_back("Volve","E6",2016);

    std::cout<<"Cars' Info:"<<std::endl;
    for(const auto& car : carList){
        car.printData();
    }
    return 0;
}
