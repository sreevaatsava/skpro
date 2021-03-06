typedef struct employee
{
    long int UID;
    char name[100];
    char gender;
    int age;
    char aadhar_no[15];
    char phoneno[15];
    char address[150];
    char city[20];
    char state[20];
    char email[50];
    char salary[15];//per month
    char department[30];
    
}employee;
////////////////////////////////////////////////////////////////////////////////////////////////
typedef struct patient
{
    long int UID;
    char name[100];
    int age;
    char gender;
    char aadhar_no[16];
    char phoneno[15];
    
    char address[150];
    char city[20];
    char state[20];
    char email[50];
    
    char observations[300];
    char diagnosis[150];
    char medication[150];
    char visit[15];
    char suggestions[300];
    char doctor[50];
    char department[30];
}patient;
////////////////////////////////////////////////////////////////////////////////////////////////
typedef struct doctor
{
    long int UID;
    char name[100];
    int age;
    char gender;
    char aadhar_no[15];
    char phoneno[15];
    
    char address[150];
    char city[20];
    char state[20];
    char email[50];

    char department[30];
    char salary[15];
    char avail[100];
}doctor;
////////////////////////////////////////////////////////////////////////////////////////////////
typedef struct infra
{
    int room_no;
    char dep[30];
    char equipments[200];
}infra;
////////////////////////////////////////////////////////////////////////////////////////////////
typedef struct dept
{

}dept;
////////////////////////////////////////////////////////////////////////////////////////////////
void scr(void);
char * itoa(long int);
void infrastructure(char *);
void get_time(char *);
////////////////////////////////////////////////////////////////////////////////////////////////
int admlog(char[]);
int emplog(long int);
int doclog(long int);
int patlog(long int);
////////////////////////////////////////////////////////////////////////////////////////////////
void empdisplay(employee);
void docdisplay(doctor);
void patdisplay(patient);
////////////////////////////////////////////////////////////////////////////////////////////////
void edisplay(employee);
void pdisplay(patient);
void ddisplay(doctor);
////////////////////////////////////////////////////////////////////////////////////////////////
employee echange(employee);
patient pchange(patient);
doctor dchange(doctor);
////////////////////////////////////////////////////////////////////////////////////////////////
int Emp_rec(void);
int Pat_rec(void);
int Doc_rec(void);
////////////////////////////////////////////////////////////////////////////////////////////////
void view_and_add_to_the_patient_records(void);
////////////////////////////////////////////////////////////////////////////////////////////////
int isleapyear(int);
int checkdate(int,int,int);
//////////////////////////////////////////////////////////////////////////////////////////////////////
