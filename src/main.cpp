#include "include/list.h"
#include "include/database.h"

int main(int arg_count, char *args[]) {
        List SimpleList;
        database data;

    if( arg_count > 1 ) {
        SimpleList.name = string(args[1]);
        SimpleList.print_menu();
        data.write(SimpleList.list);
        data.read();
    }
    else {
        cout << "Username not supplied... exiting." << endl;
    }

    return 0;
}
