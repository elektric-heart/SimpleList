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
    vector<vector<string>> MainList;
    string name;

    void write(vector<vector<string>> MainList);
    vector<vector<string>> read();
};