#include <iostream>
#include "H_FCFS.hpp"
#include <iostream>
using namespace std;


int main() {
	C_FCFS *c = new C_FCFS();
	for (SWaiting* w : c->FCFS(5))
		cout << w->index << " - " << w->waiting << endl;


	cin.get();
	return 0;
}