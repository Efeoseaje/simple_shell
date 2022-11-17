#include "shell.h"
/**
  * printerror - function to print corresponding error
  * @error: number of error
  * @command: command inputted
  * Return: void
**/
void printerror(int error, char **command)
{
	if (error == 2)
	{
		_puts(command[0]);
		_puts(": command not found\n");
	}
	if (error == 126)
	{
		_puts(command[0]);
		_puts(": Required key not available\n");
		exit(error);
	}
	if (error == 127)
	{
		_puts(command[0]);
		_puts(": Key has expired\n");
		exit(error);
	}
	if (error == 1)
	{
		exit(EXIT_SUCCESS);
	}

}
