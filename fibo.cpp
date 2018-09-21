 #include <stdio.h>

 int fibonacci(int  n){
	
	if ( n == 1 ){
	
		return 1;}
	 if ( n == 2 ){
	
		return 1;}
	
	else{
		int a = 1, b = 1, i,c ;
		for (i=3; i<=n;i++){
			c = a+ b;
			a = b;
			b = c;
		}
		return c;
	} 
	
  
 } 
		
		
	
int main(){
	int n,fibo[40];
	
	scanf("%d",&n);
	int ls[n];

 
	for (int i=0; i<n; i++){
       scanf("%d",&ls[i]);
    }
	int m = 0;
	
	
	for (int i = 0;i <  40;i++){
		
		
		
			fibo[m] = fibonacci(i+1);
		    m++;
	
		
	} 
	

	
	
	
	
      for (int k=0; k<n; k++){
  int l = 0,t = 0;
  while(1){
   if ( ls[k] == fibo[l]){
    printf("Team%d\n",3-(t%3));
    break; 
   }
   else if (ls[k] < fibo[l]){
    ls[k] = ls[k] - fibo[--l];
    t+=1;
    l = 0;
   }
   else{
    l++;
   }
  }
 } 
/*for (int m = 0;m < n ;m++){
		printf("%d ",fibo[m]);
	
	} */
	
	
 
	
}

