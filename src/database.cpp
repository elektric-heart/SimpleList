#include "include/database.h"

void database::write(vector<string> list) {

    ofstream db;
    db.open("db/lists.sl");

    if( db.is_open() ) {
        for ( int list_index=0; list_index < (int)list.size(); list_index++ ) {
            db << list[list_index] << "\n";
        }
    }
    else {
        cout << "Could not initialize the write file!\n";
    }

    db.close();

}

void database::read() {
    string line;
    ifstream db;
    db.open("db/lists.sl");

    if ( db.is_open() ) {
        while ( getline(db,line,'\n') ) {
            cout << line << "\n";
        }
    }
    else {
        cout << "Cannot open write file for reading!\n";
    }

    db.close();

}