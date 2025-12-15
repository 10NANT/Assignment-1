#include "Library.h"

int main() {
    Library lib;

    lib.addBook("Dead Ringers", "Bari Wood", "001");
    lib.addBook("American Psycho", "Bret Easton Ellis", "002");
    lib.addBook("The Picture of Dorian Gray", "Oscar Wilde", "003");

    lib.addMember(1);
    lib.addMember(2);

    lib.checkoutBook("002");

    lib.overdueReport();

    return 0;
}
