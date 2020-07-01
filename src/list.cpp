#include "include/list.h"


void List::print_menu() {
    int choice;

    cout << "**************************************\n";
    cout << "*****Hanlo, fren!*****\n";
    cout << " 1 - Add to list.\n";
    cout << " 2 - Delete from list.\n";
    cout << " 3 - Print list.\n";
    cout << " 4 - Save list.\n";
    cout << " 5 - Quit.\n\n";
    cout << " Enter your choice and press return: ";

    cin >> choice;

    if( choice == 5 ) {
        return;
    }
    else if ( choice == 1 ) {
        add_item();
    }
    else if ( choice == 2 ) {
        delete_item();
    }
    else if ( choice == 3 ) {
        print_list();
    }
    else if ( choice == 4 ) {
        save_list();
    }

        else {
            cout << "Sorry, choice not implemented yet.\n";
        }
}

void List::add_item() {
    cout << "\n\n";
    cout << "***** Add Item *****\n\n";
    cout << "Type in an item and press enter: ";

    string item;
    cin >> item;

    list.push_back(item);

    cout << "\n";
    cout << "Successfully added an item to the list \n\n";
    cin.clear();

    print_menu();
}

void List::delete_item() {
    cout << "***** Delete Item *****\n";
    cout << "Select an Index number to delete that item:\n";
    if (list.size()) {
        for ( int i=0; i < (int)list.size(); i++ ){
            cout << i << ": " << list[i] << "\n";
        }
        int choiceNum;
        cin >> choiceNum;
        list.erase(list.begin()+choiceNum);

        cout << "\n";
    }
    else {
        cout << "\n";
        cout << "No items in the list!\n\n";
    }

    print_menu();
}

void List::print_list() {
    cout << "\n\n";
    cout << "***** Printing List *****\n\n";

    for ( int list_index=0; list_index < (int)list.size(); list_index++ ) {
        cout << " * " << list[list_index] << "\n";
    }

    cout << "M - Menu \n";
    char choice;
    cin >> choice;
 
    if( choice == 'M' || choice =='m') {
        print_menu();
    }
    else {
        cout << "Invalid Choice. Exiting.\n";
    }
}

bool List::find_UserList() {
    bool UserFound = false;
    cout << "\n\n";
    cout << "***** Welcome " << name << " *****\n\n";

    for ( int user_index=0; user_index < (int)MainList.size(); user_index++ ) {
        if ( MainList[user_index][0] == name ) {
            list = MainList[user_index];
            CurrentUserIndex = user_index;
            UserFound = true;
            break;
        }
    }

    if ( UserFound == false ) {
        list.push_back(name);
        MainList.push_back(list);
        CurrentUserIndex = (int)MainList.size()-1;
    }

    return UserFound;

}

void List::save_list() {
    cout << "\n" << "Saving list...\n\n";
    MainList[CurrentUserIndex] = list;
    print_menu();
}
