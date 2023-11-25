#ifndef Activity_h
#define Activity_h
struct Activity
{
	char* name;
	char* type;
	char* description;
	unsigned long timeStamp;
	float distance;
	
	/// <summary>
	/// bit 0 = trainer
	/// bit 1 = commute
	/// bit 2 = hide_from_home
	/// </summary>
	char flags;
};
#endif