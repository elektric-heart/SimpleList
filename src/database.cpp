#include "include/database.h"

void database::write(vector<vector<string>> MainList) {

    ofstream db;
    db.open("db/lists.sl");

    if( db.is_open() ) {
        for ( int user_index=0; user_index < (int)MainList.size(); user_index++ ) {
            for ( int list_index=0; list_index < (int)MainList[user_index].size(); list_index++) {
                if ( list_index == 0 ) {
                    db << "#" << MainList[user_index][list_index] << "\n";
                }
                else {
                    db << MainList[user_index][list_index] << "\n";
                }
            }
            db << "%" << "\n";
        }
    }
    else {
        cout << "Could not initialize the write file!\n";
    }

    db.close();

}

vector<vector<string>> database::read() {
    string line;
    ifstream db;

    vector<string> UserList;

    db.open("db/lists.sl");

    if ( db.is_open() ) {
        while ( getline(db,line,'\n') ) {
            if( line.front() == '#' ) {
                cout << "Found hashtag at:" << line << "\n";
                line.erase(line.begin());
                UserList.push_back(line);
            }
            else if ( line.front() == '%' ) {
                cout << "Found a percent sign: " << line << "\n";
                MainList.push_back(UserList);
                UserList.clear();
            }
            else {
                cout << "Found Item(s): " << line << "\n";
                UserList.push_back(line);
            }
        }
    }
    else {
        cout << "Cannot open write file for reading!\n";
    }

    db.close();

return MainList;

}