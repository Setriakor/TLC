#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
#include <iostream>
#include <dirent.h>
#include <string.h>
using namespace std;

void fileInfo(char file[]){
	struct stat sbuf;
	stat(file,&sbuf);
	char *time=ctime(&sbuf.st_mtime);
	time[16]='\0';
	printf( (S_ISDIR(sbuf.st_mode)) ? "d" : "-");
	printf( (sbuf.st_mode & S_IRUSR) ? "r" : "-");
	printf( (sbuf.st_mode & S_IWUSR) ? "w" : "-");
	printf( (sbuf.st_mode & S_IXUSR) ? "x" : "-");
	printf( (sbuf.st_mode & S_IRGRP) ? "r" : "-");
	printf( (sbuf.st_mode & S_IWGRP) ? "w" : "-");
	printf( (sbuf.st_mode & S_IXGRP) ? "x" : "-");
	printf( (sbuf.st_mode & S_IROTH) ? "r" : "-");
	printf( (sbuf.st_mode & S_IWOTH) ? "w" : "-");
	printf( (sbuf.st_mode & S_IXOTH) ? "x" : "-");
	cout<<" "<<sbuf.st_uid<<" "<<sbuf.st_gid<<" "<<sbuf.st_size<<" "<<time<<" "<<file<<endl;
}

void run(DIR *input, struct dirent *inputDir){
	if (input){
		while ((inputDir = readdir(input)) != NULL){
			fileInfo(inputDir->d_name);
		}
		closedir(input);
	}
}

int main(int argc, char *argv[]){
	DIR *d;
	struct dirent *dir;
	if(argc== 1){
		d = opendir(".");
		run(d,dir);
	}else{
		for(int i=1;i<argc;i++){
			d=opendir(argv[i]);
			run(d,dir);
		}
	}
}
