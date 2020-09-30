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
	//if(S_ISDIR(sbuf.st_mode))
	cout<<oct<<sbuf.st_mode<<dec<<" "<<sbuf.st_uid<<" "<<sbuf.st_gid<<" "<<sbuf.st_size<<" "<<time<<" "<<file<<endl;
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
