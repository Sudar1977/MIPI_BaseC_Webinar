#include <stdio.h>
#include <unistd.h>
#define PATH_LENGTH 255

int main(int argc, char *argv[])
{
  char dir[PATH_LENGTH], buf[PATH_LENGTH];
  int rez = 0;
  //    opterr=0;
  while ((rez = getopt(argc, argv, "hf:")) != -1)
  {
    switch (rez)
    {
    case 'h':
      printf("This is example of list directory\n");
      printf("Usage: clear [options]\n\
        -h This help text\n\
        -f Specify folder.\n");
      printf("Example: %s -f /tmp\n", argv[0]);
      return 0;
    case 'f': 
      printf("folder is \"f = %s\".\n",optarg);
      strcpy(dir, optarg);
      break;
    case '?':
      printf("Unknown argument: %s Try -h for help\n", argv[optind - 1]);
      return 1;
    };
  };
  // convert_path_to_full(buf, dir);
  // printf("ls for folder %s\n",buf);
  // ls(dir);
  return 0;
}
