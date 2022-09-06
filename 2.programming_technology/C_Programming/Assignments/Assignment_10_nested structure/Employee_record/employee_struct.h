// Nested structure
struct Date{	//structue should satrt  with upper case
	int dd;
	int mm;
	int yyyy;		
};

struct Address{
	int flat_no;
	char address[100];
	char state[10];
};

struct Employee{
	char name[100];
	int empid;
	struct Date dob;
	struct Address add;
};

