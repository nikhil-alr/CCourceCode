
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct contact
{
    char fname[15];
    char lname[15];
    char mobile_no[15];
    char tag[15];
};
typedef struct contact contact;
void add_contact()
{
    system("cls");
    FILE *fptr;
    contact cn;
    fptr = fopen("PhoneBook","a");

    printf("\n<Fill details>\n");

    printf("Enter First Name : ");
    scanf("%s", &cn.fname);

    printf("Enter last Name : ");
    scanf("%s", &cn.lname);

    printf("\nEnter Mobile Number : ");
    scanf("%s", &cn.mobile_no);

    printf("\nEnter Tag(Enter 'Other' for nothing) : ");
    scanf("%s", &cn.tag);

    fwrite(&cn, sizeof(contact), 1, fptr);

    fclose(fptr);

    printf("Enter any key to continue.");
	getch();
    system("cls");
}

void display()
{
    system("cls");
    FILE *fptr;
    contact cn;
    int mode, count = 1, i, n;
    fptr = fopen("PhoneBook", "r");

    printf("1 : View by Time Created (Ascending)\n");
    printf("2 : View by Time Created (Descending)\n");
    printf("Choose Display Mode : ");
    scanf("%d", &mode);

    printf("---------------------------------------------------------------------\n");
    printf("---------------------------------------------------------------------");
    printf("\n|%-3s| %-15s%-15s%-20s%-12s|\n", "Sno", "First Name", "Last Name", "Contact Number", "Tag");
    printf("---------------------------------------------------------------------");

    if(mode == 1)
    {
        while(fread(&cn, sizeof(contact), 1, fptr))
        {
            printf("\n|%-3d| %-15s%-15s%-20s%-12s|", count++, cn.fname, cn.lname, cn.mobile_no, cn.tag);
        }
    }

    else if (mode == 2)
    {
        fseek(fptr,-(sizeof(cn)), SEEK_END);

        for(i = 1; i <= n; ++i)
        {
            fread(&cn, sizeof(contact), 1, fptr);
            printf("\n|%-3d| %-15s%-15s%-20s%-12s|", count++, cn.fname, cn.lname, cn.mobile_no, cn.tag);
            fseek(fptr, -2*sizeof(contact), SEEK_CUR);
        }
    }

    else
        printf("\n|Invalid Selection !!!                                       |");

    printf("\n---------------------------------------------------------------------\n");

    fclose(fptr);

    printf("\n\nEnter any key to continue : ");
	getch();
    system("cls");
}
void delete_contact(){
	contact cn;
	FILE *fptr,*fptr1;
	int flag;
	system("cls");
	fptr=fopen("PhoneBook","r");
	if(fptr==NULL){
		printf("CONTACT'S DATA NOT ADDED YET");
	}
	else{

		if(fptr1==NULL)printf("Error in opening the file");
		else{

			int choice;
			printf("\n----------------------------------------");
			printf("\n***DELETION MENU***\n");
			printf("----------------------------------------\n");
			printf("1.Deletion through mobile number\n2.Deletion through name\n");
			printf("Enter your choice: ");
			scanf("%d",&choice);
			if(choice==1){
				char mobile_no[25];
				printf("Enter CONTACT's mobile_no:");
				scanf("%s",&mobile_no);
				fflush(stdin);
				while(fread(&cn,sizeof(cn),1,fptr)==1){
					if(strcmp(mobile_no,cn.mobile_no)!=0){
						fwrite(&cn,sizeof(cn),1,fptr1);
					}
					if(strcmp(mobile_no,cn.mobile_no)==0){
						flag=1;
					}
				}
			}
			else if(choice==2){
			char fname[25],lname[25];
			printf("Enter CONTACT's fname: ");
			scanf("%s",&fname);
			printf("Enter CONTACT's lname: ");
			scanf("%s",&lname);
			fflush(stdin);
			while(fread(&cn,sizeof(cn),1,fptr)==1){
				if(strcmp(strlwr(cn.fname),strlwr(fname))!=0||strcmp(strlwr(cn.lname),strlwr(lname))!=0){
					fwrite(&cn,sizeof(cn),1,fptr1);
				}
				if(strcmp(strlwr(cn.fname),strlwr(fname))==0&&strcmp(strlwr(cn.lname),strlwr(lname))==0){
					flag=1;
				}
			}
		}else{
			printf("\nWrong choice!\nEnter any key to continue");
			getch();
			system("cls");
		}

			fclose(fptr);
			fclose(fptr1);
			if(flag!=1){
				printf("NO CONTACT'S RECORD TO DELETE!\n");
			}
			else{
				fptr1 = fopen("helper", "r");
				fptr = fopen("PhoneBook", "w");
				while(fread(&cn, sizeof(contact), 1, fptr1))
					fwrite(&cn, sizeof(contact), 1, fptr);
				printf("\nContact Deleted Successfully\n");

			}
			fclose(fptr1);
			fclose(fptr);
		}
	}
	printf("Enter any key:");
	getch();
	system("cls");
}

//Driver code
void demoFileUtility()
{
    int operation = 1;

    while(operation)
    {
        printf("\n1 : Create Contact\n");
        printf("2 : Display\n");
        printf("3 : Delete Contact\n");
        printf("4 : Exit Program\n");
        printf("\nChoose Operation : ");
        scanf("%d", &operation);

        switch(operation)
        {
            case 1 :
                add_contact();
                break;
            case 2 :
                display();
                break;
            case 3:
            	delete_contact();
            	break;
            case 4:
            	exit(1);
            	break;
            default:
            	system("cls");
            	printf("\nInvalid Operation !!");
        }
    }

}
