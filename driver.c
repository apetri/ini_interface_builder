#include <stdio.h>
#include <stdlib.h>

#include "ini.h"
#include "options.h"

int main(int argc,char **argv){

	if(argc<2){
		printf("Usage %s <options_file.ini>\n",*argv);
		exit(1);
	}

	sys_options options;

	if(ini_parse(argv[1],handler,&options)<0){
		perror("Options file not found");
		exit(1);
	}

	print_options(&options);

	return 0;
}