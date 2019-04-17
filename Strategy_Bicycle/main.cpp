#include <iostream>
//#include <gmp.h>
#include <gmpxx.h>
#include <libdrm/amdgpu.h>
#include <cstdio>

#include "ibicycle.h"
#include "human.h"
#include "simplebicycle.h"
#include "sportbicycle.h"

#define  zz '\n'
#define  zl endl

using std::cout;
using std::endl;


int main()
{
	SimpleBicycle sb;
	SportBicycle sportB;
	Human h;
	h.RideOn(sb);
	cout<< zz;
	h.RideOn(sportB);

	mpz_t result, base;
	mpz_inits (result, base, nullptr);
	mpz_set_str (base, "3", 10);
	mpz_pow_ui (result, base, 3);
	mpz_out_str(stdout, 10, result);
cout << zz;
cout << zz;




	return 0;
}
