/*
Simple shell built in C

Created by Patrick Pistor and SQUIFFY
*/

#include <stdio.h>
#include <readline/readline.h>

/* Function declarations */
char *get_line();
void do_cmd(char *command);

int 
main(__unused int argc, __unused char **argv) {

	/* main loop */
        for(;;)
            do_cmd(get_line());
}

/* XXX: finish implementing this
 * The current state is potentially dangerous.
 */
void
do_cmd(char *command) {
    printf("Handle command: %s\n", command);
}

/* Retrieve the line entered in by a user. */
char *
get_line() {

    /* XXX: The readline function will return a pointer that has been
     * malloc'd. Need to free this once we read it
     */
    char *line_read = readline("$ ");
    if (line_read && *line_read)
        add_history (line_read);
    
    return line_read;

}
