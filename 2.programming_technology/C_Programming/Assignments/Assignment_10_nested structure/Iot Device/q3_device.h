/*
Create a IOT Home device Management:
1.Add new device
2.Display Device
3.Search Device
4.Change device name
Home Data members : homeId,HomeOwner,Address,Device[2] 
Device Data members: deviceId, DeviceName,DeviceType(Sensors/Actuators),voltage

*/
typedef struct device_data
{
	int deviceId;
	char deviceName[10];
	char deviceType[10];
	int voltage;
}dev;

struct Home_data
{
	int homeId;
	char HomeOwner[50];
	char address[50];
	dev device[2];

};

