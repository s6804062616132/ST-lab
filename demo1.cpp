#include<stdio.h>
int main(){
	float mid , fin, q1, q2, lab, sit ,m,f,qq1,qq2,s,l;
	float sum;
	
	scanf("%f %f %f %f %f %f",&mid,&fin,&q1,&q2,&lab,&sit);
	m = (mid*30)/100;
	f = (fin*35)/120;
	qq1 = (q1*12)/60;
	qq2 = (q2*13)/60;
	l =(lab*5)/16;
	s = (sit*5)/16;

	sum = m+f+qq1+qq2+l+s;
	
	printf("%10s=%6.0f =>%.2f \n%10s=%6.0f =>%.2f  \n%10s=%6.0f =>%.2f  \n%10s=%6.0f =>%.2f   \n%10s=%6.0f =>%.2f   \n%10s=%6.0f =>%.2f   \n%10s= %8.2f \n",
	"Mid",mid,m,"Final",fin,f,"Q1",q1,qq1,"Q2",q2,qq2,"lab",lab,l,"Sit",sit,s,"sum",sum);


}
	
