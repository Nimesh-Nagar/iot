typedef struct Date{
		int dd;
		int mm;
		int yyyy;
} Date;
	
struct Contact{
	char phone[12];
	char email[20];
	//char address[100];
};
//	typedef struct Contact Contact
struct Student{
	int prn; //PRN Number
	char name[100]; // Name of student
	Date dob;//Date of Birth
	struct Contact contact_details;	//Contact_details
};	

