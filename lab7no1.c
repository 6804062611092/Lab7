#include<stdio.h>
double functionM(void);
int functionN(int n, double x);
double functionO(double, int, double, int);
double functionP(int a, int n, int b, int c);
 
int main(void) {
  	int a, b, c, d, e;
  	double r, s, t, u, v;
  	// ANSWER //----------------------------------------------------------------------
  	functionM();
  	//A : Correct
  	a = functionM();
  	//B : Incorrect type dont matching
  	b = functionN(a, b);
  	//C : Incorrect b is not double
  	r = functionO(r,a,s,b);
  	//D : Correct
  	s = functionP(a,b,c,d,e);
	//E : Incorrect function has limited 5 parameter
	u = functionM();
	//F : Correct
	c = d + functionN(r,s);
	//G : Incorrect r is not double
	t = s * functionO(r, a, r, a);
	//H : Correct
	a = v + functionP(r, s, t, t);
	//I : Incorrect a is int but solution is double and parameter 2 4 is not int
	functionP(functionN(a, a), s, t, t+r);
	//J : Incorrect  functionN parameter 2 is not double and s \ t \ t+r is not int 
	v = functionP(functionN(a, a), s, t, t+r);
	//K : Incorrect functionN parameter 2 is not double and s \ t \ t+r is not int 
}
