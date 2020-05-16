#include "include/list.h"

int main(int arg_count, char *args[]) {
    if( arg_count > 1 ) {
        List SimpleList;
        SimpleList.name = string(args[1]);
        SimpleList.print_menu();
    }
    else {
        cout << "Username not supplied... exiting." << endl;
    }
    return 0;
}
