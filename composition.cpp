#include<iostream>
using namespace std;

class CPU{

    string model;

    public:
    void setModel(string m){
        model = m;

    }
    string getModel(){
        return model;
    }
};
class RAM{
    int size;

    public:
    void setSize(int s){
        size = s;
    }
    int getSize(){
        return size;
    }
};
class HardDisk{
    int hardSize;

    public:
    void sethardSize(int hs){
        hardSize = hs;
    }
    int getHardSize(){
        return hardSize;
    }
};
class Computer{
    CPU cpu;
    RAM ram;
    HardDisk hardDisk;

    public:
    void setCPU(CPU c){
        cpu = c;
    }
    CPU getCPU(){
        return cpu;
    }
    void setRAM(RAM r){
        ram = r;
    }
    RAM getRAM(){
        return ram;
    }
    void setHardDisk(HardDisk h){
        hardDisk = h;
    }
    HardDisk getHardDisk(){
        return hardDisk;
    }
};
int main(){
    Computer comp;
    CPU cpu;
    RAM ram;
    HardDisk hardDisk;

    cpu.setModel("Intel i7");
    ram.setSize(16);
    hardDisk.sethardSize(512);

    comp.setCPU(cpu);
    comp.setRAM(ram);
    comp.setHardDisk(hardDisk);

    cout<<"CPU Model: "<<comp.getCPU().getModel()<<endl;
    cout<<"RAM Size: "<<comp.getRAM().getSize()<<" GB"<<endl;
    cout<<"Hard Disk Size: "<<comp.getHardDisk().getHardSize()<<" GB"<<endl;

    return 0;
}

