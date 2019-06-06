//author Niverovskyi Mykyta
#include "head.h"

int main() {
    testerExp(-15,0.00001);
	testerExp(0,0.00001);
    testerExp(100,0.00001);

    testerCos(-30,0.00001);
	testerCos(0,0.00001);
    testerCos(2,0.00001);

    testerPower(2,5);
	testerPower(8,0);
    testerPower(-6,-11);

    return 0;
}