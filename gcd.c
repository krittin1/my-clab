#include <stdio.h>

int main(){

	unsigned long long  m,n,x,y,i,m1,n1,gcd,lcm;

	scanf("%llu %llu",&m,&n);

	

	

	

	 if ( m >= 0 && n >= 0 && m <= 1000000000 && n <= 1000000000 && m == n && m!= 0 && n != 0 ){

    gcd = m;

    lcm = (m*n)/gcd;

    printf("GCD: %llu\n",gcd);

    printf("LCM: %llu\n",lcm);

  }

	

else if (m >= 0 && n >= 0 && m <= 1000000000 && n <= 1000000000 && m==0 && n== 0){

}

else if (m >= 0 && n >= 0 && m <= 1000000000 && n <= 1000000000  && n== 0){

}

else if ( m >= 0 && n >= 0 && m <= 1000000000 && n <= 1000000000 && m == 0 ){

    gcd = n;

    lcm = (m*n)/gcd;

    printf("GCD: %llu\n",gcd);

    printf("LCM: %llu\n",lcm);

  }

 else if ( m >= 0 && n >= 0 && m <= 1000000000 && n <= 1000000000 && m%n == 0 ){

    gcd = n;

    lcm = (m*n)/gcd;

    printf("GCD: %llu\n",gcd);

    printf("LCM: %llu\n",lcm);

  }



 else if (  m >= 0 && n >= 0 && m <= 1000000000 && n <= 1000000000 ){

 

	



	

		y = m;

		x = n;

		while (y%x != 0){

			i = x;

			x = y%x;

			y = i;

		}

	    gcd = x;

	    lcm = (m*n)/gcd;

		printf("GCD: %llu\n",gcd);

		printf("LCM: %llu\n",lcm);

	

}



}
