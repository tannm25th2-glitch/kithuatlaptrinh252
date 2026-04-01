#include < iostream>
#include <vector>
using namespace std;
struct person {
	int id, age;
	string name,hometown;
};
void show (vector<person>p) {
	if (p.size() == 0) {
		cout << "an empty list " << endl;
	else {
		// for (int i = 0; i < p.size(); i++) {
		for (int i = p.size() - 1; i >= 0; i--) {
			cout << "\t id:" << p[1].id << endl;
			cout << "\t name:" << p[1].name << endl;
			cout << "\t age:" << p[1].age << endl;
			cout << "\t home town:" << p[1].home town << endl;
		}
	}
		
	}
	
}

int main () {
	vector<person> list;
	do {
		system("cls");
		cout << " ----- HUMAN RESOURCE MANAGEMENT ----- " << endl;
		cout << "1. show person list" << endl;
		cout << "2. add a person" << endl;
		cout << "3. remove a person by id" << endl;
		cout << "4. find people by name" << endl;
		cout << "5. export to file" << endl;
		cout << "6. ipmprot from file" << endl;
		cout << "0. quit" << endl;
		cout << " --------------------------------------------- " << endl;
		cout << " your command: ";
		int cmd;
		cin >> cmd;
		switch (cmd) {
		case 1: {
			show (list);
			break;
		}
		case 2: { 
			person a;
			cout << "id:";
			cin >> a.id;
			cout << " name:";
			cin >> a.name;
			cout << " age:";
			cin >> a.age;
			cout << " hometown:";
			cin >> a.hometown;
			list.push_back(a);
			break;
		}
		case 3: {
			break;
		}
		case 4: {
			break;
		}

		case 5: {
			break;
		}
		case 6: {
			break;
		}
		case 0: {
			return;
		}
		default: {
			cout << " your command isn't found. try again " << endl;
		}
		}
		cout << " press enter to continue... " << endl;
		cin.ignore();
		cin.get();
	} while (true);
	{

	}
	}