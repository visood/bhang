/*
  This example has been adapted from:
  http://www3.telus.net/public/robark/
 */
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>

void on_button_click(Fl_Widget* o, void*)
{
    Fl_Button* button = (Fl_Button*) o;
    button->label("Good Job");
    button->resize(10, 150, 140, 30);
    button->redraw();
}
int main(int argc, char **argv)
{
    Fl_Window window(300, 200, "Canvas");

    window.begin();
    Fl_Button button(10, 150, 70, 30, "Click Me");
    window.end();
    button.callback(on_button_click);

    window.show();

    return Fl::run();
}
