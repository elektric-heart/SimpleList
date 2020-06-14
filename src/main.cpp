#include "include/list.h"
#include "include/database.h"

int main(int arg_count, char *args[]) {
        List SimpleList;
        database data;

    if( arg_count > 1 ) {
        SimpleList.name = string(args[1]);
        SimpleList.MainList = data.read();
        SimpleList.find_UserList();
        SimpleList.print_menu();
        data.write(SimpleList.MainList);
    }
    else {
        cout << "Username not supplied... Who are you!? exiting." << endl;
    }

    return 0;
}
