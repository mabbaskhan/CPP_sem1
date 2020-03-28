#include<iostream>
using namespace std;
class part {
    private:
        int modelNumber;
        int partNumber;
        float cost;
    public:
        void setPart(int mN, int pN, float c) {
            modelNumber = mN;
            partNumber = pN;
            cost = c;
        }  
    void showParts() {
        cout<< "\n model: "<<modelNumber;
        cout<< "\n part: "<<partNumber;
        cout<< "\n cost $: "<<cost<<endl;
    }          
};
int main() {
    part part1;
    part1.setPart(12,32,43);
    part1.showParts();
}