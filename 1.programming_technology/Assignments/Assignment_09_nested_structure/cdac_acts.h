typedef struct Module{
	int module_id;
	char module_name[50];
	int hrs;
}module;			// here structure is Module and variable is module




struct Cources{
	int course_id;
	char course_name[50];
	int no_student;
	module modules[2];	//
};
