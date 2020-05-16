#include "include/database.h"

void database::write() {

    ofstream db;
    db.open("db/lists.sl");

    if( db.is_open() ) {
        db << "1\n2\n3\n4\n5\n";
    }
    else {
        cout << "Could not initialize the write file!\n";
    }

    db.close();

}