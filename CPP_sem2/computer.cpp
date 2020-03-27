#include<iostream>
#include<string>
using namespace std;
class computer{
    public:
    string company;
    string hardDisk;
    string RAM;
    computer(string company, string hardDisk, string RAM) {
        this->company=company;
        this->hardDisk=hardDisk;
        this->RAM=RAM;
    }
    void inPutDivices() {
        cout<<"<<Input Divices>> \n";
        cout<<"1: keyboard \n" << "2: mouse \n" << "3: scaner \n" << "4: usb \n" << "5:touch screen \n";
        
    }
    void outPutDivices() {
        cout<<"<<Output Divices>> \n";
        cout<<"1: monitor \n" << "2: speakers \n" << "3: printer \n" << "4: projector \n" << "5: plotter \n";

    }
    void disply() {
        cout<<"\n compnay: " <<company;
        cout<<"\n Hard Disk: " << hardDisk;
        cout<<"\n RAM: " << RAM;
        cout<<endl;
    }

};
int main() {
    computer obj("Hewlett-Packard", "80GB", "6GB");
    obj.disply();
    obj.inPutDivices();
    obj.outPutDivices();

}