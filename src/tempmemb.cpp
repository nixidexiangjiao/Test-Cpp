// tempmemb.cpp -- template members
#include <iostream>
#include "test.h"
using std::cout;
using std::endl;

template<typename T>
class beta {
private:
	template<typename V> // nested template class member
	class hold {
	private:
		V val;
	public:
		hold(V v = 0) :
				val(v) {
		}
		void show() const {
			cout << val << endl;
		}
		V Value() const {
			return val;
		}
	};
	hold<T> q; // template object
	hold<int> n; // template object
public:
	beta(T t, int i) :
			q(t), n(i) {
	}
	template<typename U> // template method
	U blab(U u, T t) {
		return (n.Value() + q.Value()) * u / t;
	}
	void Show() const {
		q.show();
		n.show();
	}
};

template<typename T1, typename T2, typename T3>
class Pals {
private:
	T1 t1;
	T2 t2;
	T3 t3;
public:
	Pals(T1 t, T2 p, T3 o) :
			t1(t), t2(p), t3(o) {

	}
	void show() const {
		cout << t1 << endl;
		cout << t2 << endl;
	}
};

template<typename T1>
class Pals<T1, T1 *, T1 *> {
private:
	T1 t1;
	T1 * t2;
	T1 * t3;
public:
	Pals(T1 t, T1 * p, T1 * o) :
			t1(t), t2(p), t3(o) {

	}
	void show() const {
		cout << "<T1, T2, T2>" << endl;
		cout << t1 << endl;
		cout << t2 << endl;
		cout << t3 << endl;
	}
};

void tempmemb() {
//	beta<double> guy(3.5, 3);
//
//	guy.Show();
//	cout << guy.blab(10, 2.3) << endl;
//	cout << "Done\n";
	Pals<char, char*, char*> p('A', "shit", "cao");
	p.show();
}
