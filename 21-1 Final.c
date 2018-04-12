#include<stdio.h>
#include<conio.h>
int main()
{
	float rate_of_fault;
	int T,mod_page,mod_time,not_mod_page,not_mod_time;
	printf("Enter The Time Taken By Memory Access :");
	scanf("%d",&T);
	printf("Enter The Total Number Of Percentage That Page Is Modified  :");
	scanf("%d",&mod_page);
	printf("Enter The Time Taken For Modifying The Page:");
	scanf("%d",&mod_time);
	printf("Enter The Total Number Of Percentage That Page Is Not Modified :");
	scanf("%d",&not_mod_page);	
	printf("Enter The Time Taken :");
	scanf("%d",&not_mod_time);
	rate_of_fault=T*100/((mod_page*mod_time)+(not_mod_page*not_mod_time));
	printf("Final Fault Rate : %f",rate_of_fault);
	
}






