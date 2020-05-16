#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class database {
    private:
    protected:
    public:
    database(){
        //constructor
    }
    ~database(){
        //destructor
    }
    vector<string> list;
    string name;

    void write(vector<string> list);
    void read();
};