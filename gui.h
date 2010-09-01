#ifndef GUMMI_GUI_H
#define GUMMI_GUI_H

#include <gtk/gtk.h>

#include "iofunctions.h"

#define g_e_buffer GTK_TEXT_BUFFER(gummi->editor->sourcebuffer)
#define g_builder gummi->builder

typedef struct _searchwindow  {
    GtkWidget* searchwindow;
    GtkEntry* searchentry;
    GtkEntry* replaceentry;
    GtkCheckButton* backwards;
    GtkCheckButton* matchcase;
    GtkCheckButton* wholeword;
} searchwinow_t;

/* Main GUI */
void gui_init(void);
void gui_main(void);
void on_menu_new_activate(GtkWidget *widget, void* user);
void on_menu_open_activate(GtkWidget *widget, void* user);
void on_menu_save_activate(GtkWidget *widget, void* user);
void on_menu_saveas_activate(GtkWidget *widget, void* user);
void on_menu_find_activate(GtkWidget *widget, void* user);
void on_menu_cut_activate(GtkWidget *widget, void* user);
void on_menu_copy_activate(GtkWidget *widget, void* user);
void on_menu_paste_activate(GtkWidget *widget, void* user);
void on_button_searchwindow_close_clicked(GtkWidget *widget, void* user);
void on_button_searchwindow_find_clicked(GtkWidget *widget, void* user);
void on_button_searchwindow_replace_next_clicked(GtkWidget *widget, void* user);
void on_button_searchwindow_replace_all_clicked(GtkWidget *widget, void* user);

gchar * get_open_filename(void);
gchar * get_save_filename(void);
gboolean check_for_save(void);

void statusbar_set_message(gchar* message);
gboolean statusbar_del_message(void);

/* Search Window */
void searchwindow_init(void);
void searchwindow_show(void);
void searchwindow_close(void);
void searchwindow_start_search(void);
void searchwindow_start_replace_next(void);
void searchwindow_start_replace_all(void);
void on_searchwindow_text_changed(GtkEditable *editable, void* user);


#endif /* GUMMI_GUI_H */
