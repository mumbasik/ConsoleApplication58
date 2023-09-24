

#include <iostream>
using namespace std;
//N1
#define IS_EVEN(X) (((X) % (2)) == 0 ? (X) : (2)) 
//N2
#define summ(n) \
   int summ = 0; \
 for (int i = 0; i <= n; i++) { \
        summ += i; \
    }
#define sum(A)    ((A) * (A)) * (A)


//N4
int star(int a) {
	if (a == 0) {
		return 1;


	}
	else for (int i = 0; i <= a; i++) {
		cout << "*";
		return a * star(a - 1);
	}
}
//N5
int numbs( int l ) {
	;
	if (l == 0) {
		return 1;
		
	}
	else {
		for (int i = 1; i <= l; i++) {
			cout << i << "\n";
			
		}return l * numbs(l - 1);
	}
}


int main()
{
	int a = 6;
	
	cout << IS_EVEN(a) << "\n";
	int numb = 5;
	
	
	summ(numb);
	int N;
	cout << "Number " << "\n";
	cin >> N;
	star(N);
	int L = 5;
	
   numbs(L);
	int p = 3;
	cout << sum(p);

}


