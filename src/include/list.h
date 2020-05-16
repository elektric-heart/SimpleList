#include <iostream>
#include <vector>
using namespace std;

class List {
    private:
    protected:
    public:
    List(){
        //constructor
    }
    ~List(){
        //destructor
    }
    vector <vector<string>> MainList;
    vector<string> list;
    string name;
    int CurrentUserIndex;

    void print_menu();
    void print_list();
    void add_item();
    void delete_item();
    bool find_UserList();
    void save_list();
};