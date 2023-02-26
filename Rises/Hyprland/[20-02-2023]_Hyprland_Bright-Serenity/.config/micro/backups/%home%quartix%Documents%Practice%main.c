#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_TODO_STRING_SIZE 1024

struct Todo {
        char name[1024];
        char is_completed[2];
        char text[1024];
};

char *get_input(void) {
        char input_buf[MAX_TODO_STRING_SIZE];
        fgets(&input_buf, MAX_TODO_STRING_SIZE, stdin);

        return input_buf[MAX_TODO_STRING_SIZE];
}

int main(int argc, char* argv[]) {

        struct Todo *todo = (struct Todo*)calloc(100, sizeof(struct Todo));
        
        
        if (argc >= 2) {
                if (strcmp(argv[1], "create") == 0) {
                        if (argc == 3) {
                                printf("%s ", argv[1]);
                                printf("%s", argv[2]);

                                strncpy(todo->text, argv[2], MAX_TODO_STRING_SIZE);

                        }
                }
        }
        
        if (argc == 1) {
                char *input = NULL;
                size_t input_size = 0;

                while (1) {
                        printf(" > ");
                        getline(&input, &input_size, stdin);

                        if (strcmp(input, "create\n") == 0) {
                                printf("Name: ");
                                strncpy(todo->text, get_input(), MAX_TODO_STRING_SIZE);

                                printf("Is Completed? (Y/n): ");
                                if (strcmp(input, "Y\n") == 0 || strcmp(get_input(), "y\n") == 0) {
                                        strncpy(todo->is_completed, "X", 2);
                                } else {
                                        strncpy(todo->is_completed, " ", 2);
                                }

                                printf("Text: ");
                                strncpy(todo->text, get_input(), MAX_TODO_STRING_SIZE);
                        } else if (strcmp(input, "exit\n") == 0) {
                                return 0;
                        }
                }
        }

        free(todo);
        return 0;
}

fg               = "#DFE0EA",
  bg               = "#191B20",
  none             = "#191B20",
  --16181D
  dark             = '#16181D',
  comment          = "#4D5264",
  popup_back       = '#515761',
  cursor_fg        = '#DFE0EA',
  context          = '#515761',
  cursor_bg        = '#AEAFAD',
  accent           = '#BBBBBB',
  diff_add         = '#8CD881',
  diff_change      = '#6CAEC0',
  cl_bg            = "#707891",
  diff_text        = '#568BB4',
  line_fg          = "#555B6C",
  line_bg          = "#1E2026",
  gutter_bg        = "#1E2026",
  non_text         = "#606978",
  selection_bg     = "#5E697E",
  selection_fg     = "#495163",
  vsplit_fg        = "#cccccc",
  vsplit_bg        = "#21252D",
  visual_select_bg = "#272932",

  red_key_w  = "#E85A84",
  red_err    = "#D95555",
  green_func = '#94DD8E',
  green      = "#94DD8E",
  blue_type  = '#7EB7E6',
  black1     = "#272932",
  black      = "#16181D",
  white1     = "#CFD0D7",
  white      = "#DFE0EA",
  gray_punc  = "#515669",
  gray2      = "#6E7380",
  gray1      = '#343842',
  gray       = "#191B20",
  orange     = "#E0828D",
  orange_wr  = "#E39A65",
  pink       = "#D895C7",
  yellow     = "#E9D26C",