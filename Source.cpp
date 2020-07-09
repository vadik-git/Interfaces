#include<iostream>
#include"Grangpa.h"
#include"Zoo.h"
using namespace std;


void function(Grangpa&my_a) {
	vector<Daddy*> daddy(10);
    try {
		Daddy my_b = dynamic_cast<Daddy&>(my_a);
		my_b.Sleep();
		my_b.Walk();
	}
	catch (bad_cast&ex) {
		cout << ex.what() << endl;
		cout << "This object not object class Daddy" << endl;
	}
	
}
void funcTypeId(Grangpa*a) {
	
		if (typeid(*a) == typeid(Daddy)) {
			static_cast<Daddy*>(a)->Sleep();
			static_cast<Daddy*>(a)->Walk();
		}
}
int main() {

	Bear bear("Luis");
	Worker worker("Vadim");
	VideoCamera camera(9);
	
	Menu menu;
	cout << "add animal" << endl;
	menu.addAnimal(bear);
	cout << "Add worker" << endl;
	menu.addWorker(worker);
	cout << "Add cam" << endl;
	menu.addCamera(camera);
	cout << "print animal" << endl;
	menu.printAniaml();
	cout << "print worker" << endl;
	menu.printWorker();
	cout << "print camm" << endl;
	menu.printCamera();
	cout << "watch animal worker" << endl;
	menu.watchAnimals(worker, bear);
	cout << "watch animal cam " << endl;
	menu.watchCamera(camera, bear);

	menu.feedAnimal(worker, bear);


	system("pause");
	return 0;
}