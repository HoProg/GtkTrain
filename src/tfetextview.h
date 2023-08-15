#ifndef __TFE_TEXT_VIEW_H__
	#define __TFE_TEXT_VIEW_H__


#include <gtk/gtk.h>
  
#define TFE_TYPE_TEXT_VIEW tfe_text_view_get_type ()
G_DECLARE_FINAL_TYPE (TfeTextView, tfe_text_view, TFE, TEXT_VIEW, GtkTextView)
 
// Functions declaration

void tfe_text_view_set_file (TfeTextView *tv, GFile *f);  
GFile* tfe_text_view_get_file (TfeTextView *tv); 
GtkWidget* tfe_text_view_new (void);
 


#endif /*__TFE_TEXT_VIEW_H__*/