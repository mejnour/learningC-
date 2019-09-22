#include <iostream>

using namespace std;

class Chef
{
    public:
        void makeChicken() {
            cout << "Makes chicken" << endl;
        }

        void makeSalad() {
            cout << "Makes salad" << endl;
        }

        void makeSpecial() {
            cout << "Makes special" << endl;
        }
};

class ItalianChef : public Chef
{
    public:
        void makePasta() {
            cout << "Makes pasta" << endl;
        }

        void makeSpecial() {
            cout << "Makes special2" << endl;
        }
};

int main()
{
    Chef chef;
    chef.makeChicken();

    ItalianChef chef2;
    chef2.makeChicken();

    ItalianChef chef3;
    chef3.makePasta();
    chef2.makeSpecial();
    
    return 0;
}