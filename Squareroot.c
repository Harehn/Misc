#include <stdio.h>
#include <stdlib.h>

double rounding(double i,int n){
	double a=i;
	int z=n;
	for (n;n>0;n--){
		a=a*10;	
		//printf("1 ");
	}
	//printf("%f",a);
	a=(int)a;
	//printf("%f",a);
	for (z;z>0;z--){
		//printf("1 ");
		a=a/10;	
	}
	return a;
}

void main(int argc, char * argv[]){
	int n;
	if (argc<2){exit(0);}
	sscanf(argv[1],"%d",&n);
	//printf("int n= %d",n);
	double lowerbound=0;
	double upperbound=n;
	double i=n/2;
	int count=0;
	while (((i*i)-n)>0.01||((i*i)-n)<-0.01){
		if((i*i)>n){
			upperbound=i;
		}else{
			lowerbound=i;
		}
		count++;	
		i=(lowerbound+upperbound)/2;
		printf("%d) UB=%f LB=%f i= %f\n",count,upperbound,lowerbound,i);
	}
	
	printf("Squareroot of %d = %f\n",n ,rounding(i,2));
	
}
