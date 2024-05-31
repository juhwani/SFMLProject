#include <iostream>
#include <string>
class Hero {
    public:
        string name = "";
        int age = 0;
        int strength = 0;
        int dex = 0;
        int intelligence = 0;
        string weapon = "";


};


int main() {
    Hero John;
    John.age = 10;
    John.strength = 2;
    John.dex = 0;
    John.intelligence = 10;
    John.weapon = "Facts";
    std::cout << John.age << std::endl;
    return 0;
}
