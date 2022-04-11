// C program to Open a File,
// A file contains roll numbers (with repeation of roll no.) of a class .Write a program to read all roll numbers in the file& then write all odd & even numbers in separate files with  no. of occurence of a given roll no inside file

# include <stdio.h>
# include <string.h>
# include <stdlib.h>

const int MaxN = 1e5+1; // assuming roll nos aren't larger than 10^5 ( we should keep roll no lower than this no a easy to implement thing as we don't have that high roll nos usually)
int hasharr[100001];
int main( )
{

	// Declare the file pointer
	FILE *read_ptr;
	int number, odd_count=0, even_count=0;
    int *odd_roll_no = (int *)malloc(MaxN*sizeof(int)), *even_roll_no = (int *)malloc(MaxN*sizeof(int));;
	read_ptr = fopen("Roll_nos.txt","r") ;

	// Check if this filePointer is null
	// which maybe if the file does not exist
	if ( read_ptr == NULL )
	{
		printf( "Can't read/open the file please check permissions and file existence" ) ;
	}
	else
	{
		printf("Processing file\n");
        while (fscanf(read_ptr, "%d", &number) != EOF)
        {

            if(!hasharr[number]){ // if no is not present in hasharr
                if(number&1){ //if no is odd
                    odd_roll_no[odd_count++]=number;
                }
                else{
                    even_roll_no[even_count++]=number;
                }
            }
            hasharr[number]++; // incrementing frequency count in hash array
        }
        fclose(read_ptr);
        FILE *odd_file_ptr, *even_file_ptr;
        if(odd_file_ptr = fopen("odd_roll_nos.txt","w")){ //writing to odd roll nos file
            fprintf(odd_file_ptr,"Roll NO \t Frequency Count\r");
            for (int i = 0; i < odd_count; i++)
            {
                fprintf(odd_file_ptr,"%7d \t %7d\r",odd_roll_no[i],hasharr[odd_roll_no[i]]); //
            }
        }
        fclose(odd_file_ptr);
        if(even_file_ptr = fopen("even_roll_nos.txt","w")){ // writing to even roll nos file
            fprintf(even_file_ptr,"Roll NO \t Frequency Count\r\n");
            for (int i = 0; i < even_count; i++)
            {
                fprintf(even_file_ptr,"%7d \t %7d\r",even_roll_no[i],hasharr[odd_roll_no[i]]);
            }
        }
        fclose(even_file_ptr);
        printf("Data succefully processed, Good Bye!");
	}
	return 0;
}
