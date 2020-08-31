#include <gtk/gtk.h>

static void activate (GtkApplication* app, gpointer user_data) {
  GtkWidget *window;
  GtkWidget *hello_world;
  GtkWidget *box;

  window = gtk_application_window_new (app);
  gtk_window_set_default_size (GTK_WINDOW (window), 300, 200);

  hello_world = gtk_label_new ("Hello, World!");

  box = gtk_flow_box_new ();
  gtk_container_add (GTK_CONTAINER (box), hello_world);
  // removing the child immediately to simplify the example
  gtk_container_remove (GTK_CONTAINER (box), hello_world);

  gtk_container_add (GTK_CONTAINER (window), box);
  gtk_widget_show_all (window);
}

int main (int argc,  char **argv) {
  GtkApplication *app;
  int status;

  app = gtk_application_new ("org.gtk.example", G_APPLICATION_FLAGS_NONE);
  g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);
  status = g_application_run (G_APPLICATION (app), argc, argv);
  g_object_unref (app);

  return status;
}

