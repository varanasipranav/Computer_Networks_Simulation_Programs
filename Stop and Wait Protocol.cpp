#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,n,r,a;
	n=5;
	printf("The No of Packets are : %d\n",n);
	for(i=1;i<=n;i++){
		printf("The Packet Sent is %d\n",i);
		r=rand()%2;
		if(r==1){
			a = rand()%2;
			if(a==1){
				printf("Ack number : %d\n",i+1);
			}	
			else{
				printf("NACK number : %d\n",i+1);
				i--;
			}
		}
		else{
			printf("Time Out..! Resend Packet\n");
			i--;
		}
	}
}
