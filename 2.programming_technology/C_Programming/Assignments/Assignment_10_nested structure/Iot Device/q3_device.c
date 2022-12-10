/*
.Create a IOT Home device Management:
1.Add new device
2.Display Device
3.Search Device
4.Change device name
Home Data members : homeId,HomeOwner,Address,Device[2] 
Device Data members: deviceId, DeviceName,DeviceType(Sensors/Actuators),voltage

*/
#include<stdio.h>
#include"q3_device.h"
void display_data(struct Home_data *hd)
{
	printf("Home data members = %d |%s|%s| \n",hd->homeId,hd->HomeOwner,hd->address);
	for(int j=0;j<2;j++)
	{
	printf("device data members = %d |%s|%s| %d \n",hd->device[j].deviceId,hd->device[j].deviceName,hd->device[j].deviceType,hd->device[j].voltage);
	
	}
	


}
void display_home(struct Home_data *hd)
{
	printf("Home data members = %d |%s|%s| \n",hd->homeId,hd->HomeOwner,hd->address);
}
void display_device_data(struct Home_data *hd,int j)
{
	
	
	printf("device data members = %d |%s|%s| %d \n",hd->device[j].deviceId,hd->device[j].deviceName,hd->device[j].deviceType,hd->device[j].voltage);


}
void change_name(struct Home_data *hd,int* num_data)
{
	int device_id;
	printf("Enter the device Id where you change the name\n");
	scanf("%d",&device_id);
	printf("Enter the updated name\n");
	
	for(int i=0;i<*(num_data);i++)
	{
		for(int j=0;j<2;j++)
		{
		if(hd[i].device[j].deviceId==device_id)
		{
		scanf("%s",hd[i].device[j].deviceName);
		display_home(&hd[i]);
		display_device_data(&hd[i],j);
		}
		}
	
	}
	
	
}
void search_device(struct Home_data *hd,int* num_data)
{
	int device_id;
	printf("Enter the device id you want to searched\n");
	scanf("%d",&device_id);
	for(int i=0;i<*(num_data);i++)
	{
		for(int j=0;j<2;j++)
		{
		if(hd[i].device[j].deviceId==device_id)
		{
		display_home(&hd[i]);
		display_device_data(&hd[i],j);
		}
		}
	
	}




}
void input(struct Home_data *hd)
{
	printf("Enter the Home Id :");
	scanf("%d",&hd->homeId);
	printf("Enter the Home Owner name :");
	scanf("%s",hd->HomeOwner);
	printf("Enter the home owner address:");
	scanf("%s",hd->address);
		for(int i=0;i<2;i++)
		{
		printf("Enter the home device details=\n");
		printf("\tEnter the home device Id:");
		scanf("%d",&hd->device[i].deviceId);
		printf("\tEnter the home device name:");
		scanf("%s",hd->device[i].deviceName);
		printf("\tEnter the home device type :");
		scanf("%s",hd->device[i].deviceType);
		printf("\tEnter the home device voltage :");
		scanf("%d",&hd->device[i].voltage);
		
		}
	
}

void display(struct Home_data *hd,int* num_data)
{
	for(int i=0;i<*(num_data);i++)
	{
		display_data(&hd[i]);
	
	}



}	
void menu()
{
	printf("[1] Add new device\n");
	printf("[2] Display device\n");
	printf("[3] Search device\n");
	printf("[4] change device name\n");
	printf("Enter choice : ");
	
}	
int main()
{
	struct Home_data hd[10];
	int num_data=0;
	int ch=0;
	do
	{
		menu();
		scanf("%d",&ch);
		if (ch==1)
		{
		input(&hd[num_data++]);
		}
		else if (ch==2)
		{
		display(hd,&num_data);
		}
		else if (ch==3)
		{
		search_device(hd,&num_data);
		}
		else if (ch==4)
		{
		change_name(hd,&num_data);
		}
		else
		{
		printf("wrong choice");
		}
	}
	while(1);
	return 0;

}
