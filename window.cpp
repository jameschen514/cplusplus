#include <gtkmm-4.0/gtkmm.h>
#include <gtkmm-4.0/gdkmm.h>
#include <gtkmm-4.0/gtkmm/button.h>
#include <gtkmm-4.0/gtkmm/label.h>
#include <gtkmm-4.0/gtkmm/window.h>
#include <gtkmm-4.0/gtkmm/image.h>

class MyWindow : public Gtk::Window
{
public:
  MyWindow();
private:
  Gtk::Button aButton;

};

MyWindow::MyWindow()
{
  set_title("Title of window here");
  set_default_size(720, 480);
  
}

int main(int argc, char* argv[])
{
  auto app = Gtk::Application::create("org.gtkmm.examples.base");
  

  return app->make_window_and_run<MyWindow>(argc, argv);
}
