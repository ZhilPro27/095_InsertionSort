#include <iostream>
using namespace std;

int arr[12];	//Deklarasi variable global array dengan ukuran 12.
int n;			//Deklarrasi variable global n untuk menyimpan banyaknya elemen pada array.

void input() {	//Prosedur untuk input.
	while (true) {
		cout << "Masukkan banyaknya elemen array = "; //Output ke layar 
		cin >> n; //Input dari pengguna
		if (n <= 12) //Jika n kurang dari atau sama dengan 12
			break;	//Keluar dari loop
		else {		//Jika n lebih dari 12
			cout << "\nArrayd dapat mempunyai maksimal 20 elemen\n"; //Output ke layar
		}
	}
	cout << endl;
	cout << "=====================" << endl;
	cout << "Masukkan Elemen Array" << endl;
	cout << "=====================" << endl;

	for (int i = 0; i < n; i++) { //Looping dengan i dimulai dari 0 hingga n-1
		cout << "Data ke-" << (i + 1) << "= "; //Output ke layar
		cin >> arr[i];			//Output dari pengguna
	}
}

void insertionSort() {

	int i, temp, j;
	int pass = 1;

	for (i = 1; i <= n - 1; i++) {		//Step 1
		temp = arr[i];		//Step 2
		j = i - 1;		//Step 3
		while (j >= 0 && arr[j] > temp)		//Step 4
		{
			arr[j+1] = arr[j];	//Step 4a
			j--;	//Step 4b
		}
		arr[j+1] = temp; //Step 5
	}
	do {
		pass = pass + 1;
			cout << "\nPass" << pass - 1 << "= "; //Number of pass
		for (int k = 0; k < n; k++) {
			cout << arr[k] << " "; //Menampilkan data pada number of pass
		}
		cout << endl;

	} while (pass <= n - 1);
}

void display() {
	cout << endl;
	cout << "=================================" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "=================================" << endl;
	cout << endl;
	for (int j = 0; j < n; j++) {
		cout << arr[j]; //Menampilkan array
		if (j < n - 1) {
			cout << " --> ";
		}
	}
	cout << endl;
	cout << endl;
	cout << "Jumlah pass = " << n - 1 << endl; //Menampilkan jumlah dari pass
	cout << endl;
	cout << endl;
}

int main() {

	input();
	insertionSort();
	display();

	system("pause");
	return 0;
}