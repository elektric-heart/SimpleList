#include "include/list.h"
#include "include/database.h"

int main(int arg_count, char *args[]) {
    if( arg_count > 1 ) {
        List SimpleList;
        SimpleList.name = string(args[1]);
        SimpleList.print_menu();
    }
    else {
        cout << "Username not supplied... exiting." << endl;
    }

        database data;
        data.write();

    return 0;
}
